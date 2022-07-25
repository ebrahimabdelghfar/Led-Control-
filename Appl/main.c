#include "DIO.h"
#include "ports.h"
#include "General_Purpose_Timer.h"
#include "tm4c123gh6pm.h"
int On_Time_Ms  = 100;
int Off_Time_Ms = 200;
void HardFault_Handler();
int main(){
	Port_Init(port_F);
	Init_Timer(Timer_0,Timer_B,Wide,_32_Norm_Bit,Periodic_Mode,Down_Counting);
	
	for(uint8 i=1;i<4;i++){
		Pin_DEN(port_F,i,enable);
		Pin_Direction(port_F,i,output);
	}
	
	while(1){
		Pin_Write(port_F,1,HIGH);
		Delay(Timer_0,Wide,On_Time_Ms);
		Pin_Clear(port_F,1);
		Delay(Timer_0,Wide,Off_Time_Ms);
	}
}
void HardFault_Handler(){
}