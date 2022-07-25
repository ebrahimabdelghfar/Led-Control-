#include "tm4c123gh6pm.h"
#include "types.h"
#include "bitwise_operation.h"

void Init_Timer(uint32 Timer,uint8 Timer_A_or_B,uint8 wide_or_normal,uint32 Timer_Config,uint8 Mode,uint8 Counting_Direction){
if (Timer==0){
	
			//////////////////////////////////////////////////
			/*select we want normal or wide timer clock*/
			/////////////////////////////////////////////////
				if(wide_or_normal==0){
					SYSCTL_RCGCTIMER_R  |= Change_Bit( Timer , 1 );
				}
				else{
					SYSCTL_RCGCWTIMER_R |= Change_Bit( Timer , 1 );
				}
			/*//////////////////////////////////////////////////*/
			/*end*/
			/*//////////////////////////////////////////////////*/	
	
			/*Clear any Interupt flag and stop the timer*/
					TIMER0_ICR_R  = 0x1;
					TIMER0_CTL_R  = 0x0;
				
					WTIMER0_ICR_R = 0x1;
					WTIMER0_CTL_R = 0x0;
			/*end*/
							
			/*/////////////////////////////////////////////////*/
			/*configure for each timer*/
			/*/////////////////////////////////////////////////*/	
				if(wide_or_normal==0){
					TIMER0_CFG_R  =  Timer_Config;
				}
				else{
					WTIMER0_CFG_R  =  Timer_Config;
				}
			/*Timer A and Timer B Mode configuration*/
				if(Timer_A_or_B==0)
				{
					if(wide_or_normal==0){
						TIMER0_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER0_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
				
				else if(Timer_A_or_B==8)
				{
					if(wide_or_normal==0){
						TIMER0_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER0_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
			/*end*/
				
			/*Timer A and Timer B interupt enable*/
				if(wide_or_normal==0){
					TIMER0_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}
				else{
					WTIMER0_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}
			}
		/*end of case timer 0*/
		
		/*init timer1*/
if(Timer==1){
		//////////////////////////////////////////////////
			/*select we want normal or wide timer clock*/
			/////////////////////////////////////////////////
				if(wide_or_normal==0){
					SYSCTL_RCGCTIMER_R  |= Change_Bit( Timer , 1 );
				}
				else{
					SYSCTL_RCGCWTIMER_R |= Change_Bit( Timer , 1 );
				}
			/*//////////////////////////////////////////////////*/
			/*end*/
			/*//////////////////////////////////////////////////*/	
	
			/*Clear any Interupt flag and stop the timer*/
					TIMER1_ICR_R  = 0x1;
					WTIMER1_ICR_R = 0x1;				
					TIMER1_CTL_R  = 0x0;
					WTIMER1_CTL_R = 0x0;
			/*end*/
				
				
			/*/////////////////////////////////////////////////*/
			/*configure for each timer*/
			/*/////////////////////////////////////////////////*/	
				if(wide_or_normal==0){
					TIMER1_CFG_R  =  Timer_Config;
				}
				else{
					WTIMER1_CFG_R  =  Timer_Config;
				}
			/*Timer A and Timer B Mode configuration*/
				if(Timer_A_or_B==0)
				{
					if(wide_or_normal==0){
						TIMER1_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER1_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
				
				else if(Timer_A_or_B==8)
				{
					if(wide_or_normal==0){
						TIMER1_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER1_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
			/*end*/
				
			/*Timer A and Timer B interupt enable*/
				if(wide_or_normal==0){
					TIMER1_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}
				else{
					WTIMER1_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}
			}
		/*end of case timer 1*/
		
		/*init Timer2*/
if(Timer==2){
				if(wide_or_normal==0){
					SYSCTL_RCGCTIMER_R  |= Change_Bit( Timer , 1 );
				}
				else{
					SYSCTL_RCGCWTIMER_R |= Change_Bit( Timer , 1 );
				}
			/*//////////////////////////////////////////////////*/
			/*end*/
			/*//////////////////////////////////////////////////*/	
	
			/*Clear any Interupt flag and stop the timer*/
					TIMER2_ICR_R  = 0x1;
					WTIMER2_ICR_R = 0x1;				
					TIMER2_CTL_R  = 0x0;
					WTIMER2_CTL_R = 0x0;
			/*end*/
				
				
			/*/////////////////////////////////////////////////*/
			/*configure for each timer*/
			/*/////////////////////////////////////////////////*/	
				if(wide_or_normal==0){
					TIMER2_CFG_R  =  Timer_Config;
				}
				else{
					WTIMER2_CFG_R  =  Timer_Config;
				}
			/*Timer A and Timer B Mode configuration*/
				if(Timer_A_or_B==0)
				{
					if(wide_or_normal==0){
						TIMER2_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER2_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
				
				else if(Timer_A_or_B==8)
				{
					if(wide_or_normal==0){
						TIMER2_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER2_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
			/*end*/
				
			/*Timer A and Timer B interupt enable*/
				if(wide_or_normal==0){
					TIMER2_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}
				else{
					WTIMER2_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}
			}
		/*end of case timer 2*/
						
		/*init timer 3*/
if(Timer==3){
				if(wide_or_normal==0){
					SYSCTL_RCGCTIMER_R  |= Change_Bit( Timer , 1 );
				}
				else{
					SYSCTL_RCGCWTIMER_R |= Change_Bit( Timer , 1 );
				}
			/*//////////////////////////////////////////////////*/
			/*end*/
			/*//////////////////////////////////////////////////*/	
	
			/*Clear any Interupt flag and stop the timer*/
					TIMER3_ICR_R  = 0x1;
					WTIMER3_ICR_R = 0x1;				
					TIMER3_CTL_R  = 0x0;
					WTIMER3_CTL_R = 0x0;
			/*end*/
				
			/*/////////////////////////////////////////////////*/
			/*configure for each timer*/
			/*/////////////////////////////////////////////////*/	
				if(wide_or_normal==0){
					TIMER3_CFG_R  =  Timer_Config;
				}
				else{
					WTIMER3_CFG_R  =  Timer_Config;
				}
			/*Timer A and Timer B Mode configuration*/
				if(Timer_A_or_B==0)
				{
					if(wide_or_normal==0){
						TIMER3_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER3_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
				
				else if(Timer_A_or_B==8)
				{
					if(wide_or_normal==0){
						TIMER3_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER3_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
			/*end*/
				
			/*Timer A and Timer B interupt enable*/
				if(wide_or_normal==0){
					TIMER3_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}
				else{
					WTIMER3_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}
			}
		/*end of case timer 3*/
				
		/*init timer4*/
if(Timer==4){
			if(wide_or_normal==0){
					SYSCTL_RCGCTIMER_R  |= Change_Bit( Timer , 1 );
				}
				else{
					SYSCTL_RCGCWTIMER_R |= Change_Bit( Timer , 1 );
				}
			/*//////////////////////////////////////////////////*/
			/*end*/
			/*//////////////////////////////////////////////////*/	
	
			/*Clear any Interupt flag and stop the timer*/
					TIMER4_ICR_R  = 0x1;
					WTIMER4_ICR_R = 0x1;				
					TIMER4_CTL_R  = 0x0;
					WTIMER4_CTL_R = 0x0;
			/*end*/
				
				
			/*/////////////////////////////////////////////////*/
			/*configure for each timer*/
			/*/////////////////////////////////////////////////*/	
				if(wide_or_normal==0){
					TIMER4_CFG_R  =  Timer_Config;
				}
				else{
					WTIMER4_CFG_R  =  Timer_Config;
				}
			/*Timer A and Timer B Mode configuration*/
				if(Timer_A_or_B==0)
				{
					if(wide_or_normal==0){
						TIMER4_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER4_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
				
				else if(Timer_A_or_B==8)
				{
					if(wide_or_normal==0){
						TIMER4_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER4_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
			/*end*/
				
			/*Timer A and Timer B interupt enable*/
				if(wide_or_normal==0){
					TIMER4_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}
				else{
					WTIMER4_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}
			}
		/*end of case timer 4*/

		/*init Timer5*/
if(Timer==5){
		if(wide_or_normal==0){
					SYSCTL_RCGCTIMER_R  |= Change_Bit( Timer , 1 );
				}
				else{
					SYSCTL_RCGCWTIMER_R |= Change_Bit( Timer , 1 );
				}
			/*//////////////////////////////////////////////////*/
			/*end*/
			/*//////////////////////////////////////////////////*/	
	
			/*Clear any Interupt flag and stop the timer*/
					TIMER5_ICR_R  = 0x1;
					WTIMER5_ICR_R = 0x1;				
					TIMER5_CTL_R  = 0x0;
					WTIMER5_CTL_R = 0x0;
			/*end*/
				
				
			/*/////////////////////////////////////////////////*/
			/*configure for each timer*/
			/*/////////////////////////////////////////////////*/	
				if(wide_or_normal==0){
					TIMER5_CFG_R  =  Timer_Config;
				}
				else{
					WTIMER5_CFG_R  =  Timer_Config;
				}
			/*Timer A and Timer B Mode configuration*/
				if(Timer_A_or_B==0)
				{
					if(wide_or_normal==0){
						TIMER5_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER5_TAMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
				
				else if(Timer_A_or_B==8)
				{
					if(wide_or_normal==0){
						TIMER5_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
					else{
						WTIMER5_TBMR_R |=  ( Mode | Change_Bit( 4 , Counting_Direction ));
					}
				}
			/*end*/
				
			/*Clear any Interupt flag*/
				TIMER5_ICR_R  = 0x1;
				WTIMER5_ICR_R  = 0x1;
			/*end*/
				
			/*Timer A and Timer B interupt enable*/
				if(wide_or_normal==0){
					TIMER5_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}
				else{
					WTIMER5_IMR_R |=  Change_Bit( Timer_A_or_B , 1 );
				}

	}		
}
void Delay(uint8 Timer_No,uint8 wide_or_normal,uint32 delay_time){
	uint32 No_Of_Ticks= delay_time*16000;
	switch(Timer_No){
		case 0 :{
			if(wide_or_normal==0) //normal case
				{
					while(1)
					{
						if((TIMER0_RIS_R & 0x1)==0x1){
							  TIMER0_ICR_R  = 0x1;
							break;
						}
					}	
				}					
				else{ //Wide Timer Case
							WTIMER0_TAILR_R = No_Of_Ticks;
							WTIMER0_CTL_R |= 1<<0;
							while(1) /*Wait until time is out*/
								{
									if((WTIMER0_RIS_R & 0x1) == 0x1){
											WTIMER0_ICR_R = 0x1 ;
											break;
										}
								}				
						}
				break;
			}
		case 1:{
			if(wide_or_normal==0) //normal case
				{
							TIMER1_TAILR_R = No_Of_Ticks;
							TIMER1_CTL_R  |= 1<<0;
							while(1) /*Wait until time is out*/
								{
									if((TIMER1_RIS_R & 0x1) == 0x1){
											TIMER1_ICR_R  = 0x1 ;
											break;
										}
								}							
				}
				else{ //Wide Timer Case
							WTIMER1_TAILR_R = No_Of_Ticks;
							WTIMER1_CTL_R |= 1<<0;
							while(1) /*Wait until time is out*/
								{
									if((WTIMER1_RIS_R & 0x1) == 0x1){
											WTIMER1_ICR_R = 0x1 ;
											break;
										}
								}							
						}
			break;
		}
		case 2:{
			if(wide_or_normal==0) //normal case
				{
							TIMER2_TAILR_R = No_Of_Ticks;
							TIMER2_CTL_R  |= 1<<0;
							while(1) /*Wait until time is out*/
								{
									if(( TIMER2_RIS_R & 0x1 ) == 0x1){
											TIMER2_ICR_R  = 0x1 ;
											break;
										}
								}
				 }
				else{ //Wide Timer Case
							WTIMER2_TAILR_R = No_Of_Ticks;
							WTIMER2_CTL_R |= 1<<0;
							while(1) /*Wait until time is out*/
								{
									if((WTIMER2_RIS_R & 0x1) == 0x1){
											WTIMER2_ICR_R = 0x1;
											break;
										}
								}
						}
			break;
		}
		case 3:{
			if(wide_or_normal==0) //normal case
				{
							TIMER3_TAILR_R = No_Of_Ticks;
							TIMER3_CTL_R  |= 1<<0;
								while(1) /*Wait until time is out*/
								{
									if((TIMER3_RIS_R &  0x1) == 0x1){
											TIMER3_ICR_R  = 0x1 ;
											break;
										}
								}
						}
				else{ //Wide Timer Case
							WTIMER3_TAILR_R = No_Of_Ticks;
							WTIMER3_CTL_R |= 1<<0;
							while(1) /*Wait until time is out*/
								{
									if(( WTIMER3_RIS_R & 0x1 ) == 0x1){
											 WTIMER3_ICR_R  = 0x1 ;
											break;
											}
								}
						}
			break;
		}
		case 4:{
			if(wide_or_normal==0) //normal case
				{
							TIMER4_TAILR_R = No_Of_Ticks;
							TIMER4_CTL_R  |= 1<<0;
							while(1) /*Wait until time is out*/
								{
									if((TIMER4_RIS_R & 0x1) == 1){
											TIMER4_ICR_R  = 0x1 ;
											break;
										}
								}
				 }
				else{ //Wide Timer Case
							WTIMER4_TAILR_R = No_Of_Ticks;
							WTIMER4_CTL_R |= 1<<0;
							while(1) /*Wait until time is out*/
								{
									if((WTIMER4_RIS_R & 0x1) == 0x1){
											WTIMER4_ICR_R = 0x1 ;
											break;
										}
								}							
						}
								
			break;
		}
		case 5:{
			if(wide_or_normal==0) //normal case
				{
							TIMER5_TAILR_R = No_Of_Ticks;
							TIMER5_CTL_R  |= 1<<0;
							while(1) /*Wait until time is out*/
								{
									if((TIMER5_RIS_R & 0x1) == 0x1){
											TIMER5_ICR_R = 0x1 ;
											break;
										}
								}							
				}
				else{ //Wide Timer Case
							WTIMER5_TAILR_R = No_Of_Ticks;
							WTIMER5_CTL_R |= 1<<0;
							while(1) /*Wait until time is out*/
								{
									if((WTIMER5_RIS_R & 0x1) == 0x1){
											WTIMER5_ICR_R  = 0x1 ;
											break;
										}
								}
						}
			break;
		}
	}
	
}