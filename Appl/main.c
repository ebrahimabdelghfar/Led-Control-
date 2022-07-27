#include "DIO.h"
#include "ports.h"
#include "General_Purpose_Timer.h"
#include "tm4c123gh6pm.h"
#include "Interupt_Driver.h"

#define WTimer_1_IRQ 96
#define WTimer_0_IRQ 94

int ON_Time_Ms  = 8000; //The light will be ON for 1 sec
int OFF_Time_Ms = 4000; //The light will be OFF for 0.5 sec  
int Led_Color 	= 1 ; //for red color
int dimming_counter=0;

/*interupts prototype*/
void HardFault_Handler () ;
void GPIOF_Handler () ;
void WTIMER0A_Handler () ; //This timer is Used to rise flag when ON timer is elapsed
void WTIMER1A_Handler () ; //This timer is Used to rise flag when OFF timer is elapsed
/*end*/

/*Flag Initiation*/
int Flag_finish_OFF=0; 
/*end*/
int main(){
	
	/*Initiate all used peripheral*/
	Port_Init(port_F);
	Init_Timer(Timer_0,Timer_A,Wide,_32_Norm_Bit,One_shot_Mode,Down_Counting);	
	Init_Timer(Timer_1,Timer_A,Wide,_32_Norm_Bit,One_shot_Mode,Down_Counting);	
	Init_Interupt_NVIC(WTimer_1_IRQ,0);
	/*end*/
	
	/*defination of output port*/
	for(uint8 i=1;i<4;i++){
		Pin_DEN(port_F,i,enable);
		Pin_Direction(port_F,i,output);
	}
	/*End*/
	
	/*enable the switchs */
	GPIO_PORTF_LOCK_R = 0x4C4F434B;
	GPIO_PORTF_CR_R=0x11;
	
	GPIO_PORTF_DIR_R |= 0x00;
	GPIO_PORTF_DEN_R |= 0x11;
	GPIO_PORTF_PUR_R |= 0x11;
	
	Attach_Interupt_For_GPIO(port_F,0,Edge_Sensitve,Rising_Edge,Single,1);
	Attach_Interupt_For_GPIO(port_F,4,Edge_Sensitve,Rising_Edge,Single,1);
	/*End*/
	
	/*Main program*/
	while(1){
		Pin_Write(port_F,Led_Color,HIGH);
		Delay_MS(Timer_0,Wide,ON_Time_Ms); 
		/*dimming untill OFF*/
		set_dimming_time_ms(Timer_1,Wide,OFF_Time_Ms);
		while(1){ /*remain on Off state untill the timer1 time finish*/
			if(dimming_counter==0){
				for(int i=0;i<=800;i++){
					Pin_Write(port_F,Led_Color,HIGH);
					Delay_uS(Timer_0,Wide,800-i);
					Pin_Clear(port_F,Led_Color);
					Delay_uS(Timer_0,Wide,i);
				}
			}
			dimming_counter++;
			if(Flag_finish_OFF==1){
				Flag_finish_OFF=0;
				dimming_counter=0;
				break ;
				}
			}
		}
		/*end*/
	}
	/*end*/
	
void HardFault_Handler(){
}
void GPIOF_Handler(){
	if(GPIO_PORTF_MIS_R&0x10){
		Led_Color = 2; //change color to Blue
	}
	else if(GPIO_PORTF_MIS_R&0x01){
		Led_Color = 1; //change color to Red
	}
	GPIO_PORTF_ICR_R=0x11;
}
void WTIMER1A_Handler(){
	Flag_finish_OFF=1;
	WTIMER1_ICR_R=0x1;
}