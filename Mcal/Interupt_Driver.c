#include "types.h"
#include "tm4c123gh6pm.h"
/*
Description: This fuction is used to initiate interupt and set the priority

parameters: uint8 Handler_IRQ "interupt number"
						uint8 Priority "whats the priority you want to set for Handler"
*/
void Init_Interupt_NVIC( uint8 Handler_IRQ,uint8 priority ){
	/*Enable Nvic interupt handler by taking the IRQ number from User*/
	uint8 Handler_priority=0;
	if(Handler_IRQ>=0 && Handler_IRQ<=31 ){
		NVIC_EN0_R |= 1 << (Handler_IRQ-0);
	}
	
	else if(Handler_IRQ>=32 && Handler_IRQ<=63 ){
		NVIC_EN1_R |= 1 << (Handler_IRQ-32);
	}
	
	else if(Handler_IRQ>=64 && Handler_IRQ<=95 ){
		NVIC_EN2_R |= 1 << (Handler_IRQ-64);
	}
	
	else if(Handler_IRQ>=96 && Handler_IRQ<=127 ){
		NVIC_EN3_R |= 1 << (Handler_IRQ-96);
	}
	/*End*/
	
	/*Assigning priority*/
	if(Handler_IRQ>=0&&Handler_IRQ<=3){
		Handler_priority=Handler_IRQ-0;
		NVIC_PRI0_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));
	}
	else if(Handler_IRQ>=4&&Handler_IRQ<=7){
		Handler_priority=Handler_IRQ-4;
		NVIC_PRI1_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=8&&Handler_IRQ<=11){
		Handler_priority=Handler_IRQ-8;
		NVIC_PRI2_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=12&&Handler_IRQ<=15){
		Handler_priority=Handler_IRQ-12;
		NVIC_PRI3_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=16&&Handler_IRQ<=19){
		Handler_priority=Handler_IRQ-16;
		NVIC_PRI4_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=20&&Handler_IRQ<=23){
		Handler_priority=Handler_IRQ-20;
		NVIC_PRI5_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=24&&Handler_IRQ<=27){
		Handler_priority=Handler_IRQ-24;
		NVIC_PRI6_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=28&&Handler_IRQ<=31){
		Handler_priority=Handler_IRQ-28;
		NVIC_PRI7_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=32&&Handler_IRQ<=35){
		Handler_priority=Handler_IRQ-32;
		NVIC_PRI8_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=36&&Handler_IRQ<=39){
		Handler_priority=Handler_IRQ-36;
		NVIC_PRI9_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=40&&Handler_IRQ<=43){
		Handler_priority=Handler_IRQ-40;
		NVIC_PRI10_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=44&&Handler_IRQ<=47){
		Handler_priority = Handler_IRQ-44;
		NVIC_PRI11_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=48&&Handler_IRQ<=51){
		Handler_priority=Handler_IRQ-48;
		NVIC_PRI12_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=52&&Handler_IRQ<=55){
		Handler_priority=Handler_IRQ-52;
		NVIC_PRI13_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=56&&Handler_IRQ<=59){
		Handler_priority=Handler_IRQ-56;
		NVIC_PRI14_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=60&&Handler_IRQ<=63){
		Handler_priority=Handler_IRQ-60;
		NVIC_PRI15_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=64&&Handler_IRQ<=67){
		Handler_priority=Handler_IRQ-64;
		NVIC_PRI16_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=68&&Handler_IRQ<=71){
		Handler_priority=Handler_IRQ-68;
		NVIC_PRI17_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=72&&Handler_IRQ<=75){
		Handler_priority=Handler_IRQ-72;
		NVIC_PRI18_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=76&&Handler_IRQ<=79){
		Handler_priority=Handler_IRQ-76;
		NVIC_PRI19_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=80&&Handler_IRQ<=83){
		Handler_priority=Handler_IRQ-80;
		NVIC_PRI20_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=84&&Handler_IRQ<=87){
		Handler_priority=Handler_IRQ-84;
		NVIC_PRI21_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=88&&Handler_IRQ<=91){
		Handler_priority=Handler_IRQ-88;
		NVIC_PRI22_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=92&&Handler_IRQ<=95){
		Handler_priority=Handler_IRQ-92;
		NVIC_PRI23_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=96&&Handler_IRQ<=99){
		Handler_priority=Handler_IRQ-96;
		NVIC_PRI24_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=100&&Handler_IRQ<=103){
		Handler_priority=Handler_IRQ-100;
		NVIC_PRI25_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=104&&Handler_IRQ<=107){
		Handler_priority=Handler_IRQ-104;
		NVIC_PRI26_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=108&&Handler_IRQ<=111){
		Handler_priority=Handler_IRQ-108;
		NVIC_PRI27_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=112&&Handler_IRQ<=115){
		Handler_priority=Handler_IRQ-112;
		NVIC_PRI28_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=116&&Handler_IRQ<=119){
		Handler_priority=Handler_IRQ-116;
		NVIC_PRI29_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=120&&Handler_IRQ<=123){
		Handler_priority=Handler_IRQ-120;
		NVIC_PRI30_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=124&&Handler_IRQ<=127){
		Handler_priority=Handler_IRQ-124;
		NVIC_PRI31_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=128&&Handler_IRQ<=131){
		Handler_priority=Handler_IRQ-128;
		NVIC_PRI32_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=132&&Handler_IRQ<=133){
		Handler_priority=Handler_IRQ-132;
		NVIC_PRI33_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	else if(Handler_IRQ>=136&&Handler_IRQ<=138){
		Handler_priority=Handler_IRQ-136;
		NVIC_PRI34_R |= priority<<((5*(1+Handler_priority))+(3*Handler_priority));	
	}
	/*end*/
}

/*
Description : This function is used to configure the GPIO interupt settings
parameters  : uint8 Port // the port you want to configure ( port_A , port_B , port_C , port_D , port_E , port_F)
							uint8 Pin // the number of pin you want to be attached to interupt 
							uint8 Level_or_edge // The interupt will be triggered upon Level or Edge "values to be write" (	Edge_Sensitve , Level_Sensitive )
							uint8 Falling_or_Rising // The Interupt will be trigger High level/edge of Low level/edge "values to be write" (	Low_Level , High_Level , Falling_Edge , Rising_Edge )
 							uint8 Single_Both_edge // select if the triggering by single or both edge or none use "values to be write" (Single,Both,NONE)
							uint8 Priority // Whats the priority you want to assign ? from 0 -----> 7 in direction of decreasing of priority
*/
void Attach_Interupt_For_GPIO(uint8 Port , uint8 Pin , uint8 Level_or_Edge ,uint8 Falling_or_Rising,uint8 Single_Both_edge,uint8 Priority){
	switch(Port){
		case 0 :{ //Case PortA
			GPIO_PORTA_ICR_R = 0xFF ; // clear any from GPIO interupt
			GPIO_PORTA_IM_R  |= 0 << Pin ;    // Masked the interupt for configuration
			GPIO_PORTA_IS_R	 |= Level_or_Edge << Pin ; // Select if the interupt pin triggerd upon Level or edge
			GPIO_PORTA_IEV_R |= Falling_or_Rising << Pin ;
			if(Single_Both_edge != 2){
			GPIO_PORTA_IBE_R |= Single_Both_edge << Pin; //select if the interupt will be triggerd in both edges
			}
			else{
				GPIO_PORTA_IBE_R |= 0 << Pin ; //controlled by IEV
			}
			GPIO_PORTA_IM_R |= 1<< Pin ; //unmasked 
			Init_Interupt_NVIC( 0 , Priority ); //init the interupt
			break;
		}
		case 1 :{ //Case PortB
			GPIO_PORTB_ICR_R = 0xFF ; // clear any from GPIO interupt
			GPIO_PORTB_IM_R  |= 0<<Pin ;    // Masked the interupt for configuration
			GPIO_PORTB_IS_R	 |= Level_or_Edge << Pin ; // Select if the interupt pin triggerd upon Level or edge
			GPIO_PORTB_IEV_R |= Falling_or_Rising << Pin ;
			if(Single_Both_edge != 2){
			GPIO_PORTB_IBE_R |= Single_Both_edge << Pin; //select if the interupt will be triggerd in both edges
			}
			else{
				GPIO_PORTB_IBE_R |= 0 << Pin ; //controlled by IEV
			}
			GPIO_PORTB_IM_R |= 1<< Pin ; //unmasked 
			Init_Interupt_NVIC( 1 , Priority ); //init the interupt
			break;
		}
		case 2 :{ //Case PortC
			GPIO_PORTC_ICR_R = 0xFF ; // clear any from GPIO interupt
			GPIO_PORTC_IM_R  |= 0<<Pin ;    // Masked the interupt for configuration
			GPIO_PORTC_IS_R	 |= Level_or_Edge << Pin ; // Select if the interupt pin triggerd upon Level or edge
			GPIO_PORTC_IEV_R |= Falling_or_Rising << Pin ;
			if(Single_Both_edge != 2){
			GPIO_PORTC_IBE_R |= Single_Both_edge << Pin; //select if the interupt will be triggerd in both edges
			}
			else{
				GPIO_PORTC_IBE_R |= 0 << Pin ; //controlled by IEV
			}
			GPIO_PORTC_IM_R |= 1<< Pin ; //unmasked 
			Init_Interupt_NVIC( 2 , Priority ); //init the interupt
			break;
		}
		case 3 :{ //Case PortD
			GPIO_PORTD_ICR_R = 0xFF ; // clear any from GPIO interupt
			GPIO_PORTD_IM_R  |= 0<<Pin ;    // Masked the interupt for configuration
			GPIO_PORTD_IS_R	 |= Level_or_Edge << Pin ; // Select if the interupt pin triggerd upon Level or edge
			GPIO_PORTD_IEV_R |= Falling_or_Rising << Pin ;
			if(Single_Both_edge != 2){
			GPIO_PORTD_IBE_R |= Single_Both_edge << Pin; //select if the interupt will be triggerd in both edges
			}
			else{
				GPIO_PORTD_IBE_R |= 0 << Pin ; //controlled by IEV
			}
			GPIO_PORTD_IM_R |= 1<< Pin ; //unmasked 
			Init_Interupt_NVIC( 3 , Priority ); //init the interupt
			break;
		}
		case 4 :{ //Case PortE
			GPIO_PORTE_ICR_R = 0xFF ; // clear any from GPIO interupt
			GPIO_PORTE_IM_R  |= 0<<Pin ;    // Masked the interupt for configuration
			GPIO_PORTE_IS_R	 |= Level_or_Edge << Pin ; // Select if the interupt pin triggerd upon Level or edge
			GPIO_PORTE_IEV_R |= Falling_or_Rising << Pin ;
			if(Single_Both_edge != 2){
			GPIO_PORTE_IBE_R |= Single_Both_edge << Pin; //select if the interupt will be triggerd in both edges
			}
			else{
				GPIO_PORTE_IBE_R |= 0 << Pin ; //controlled by IEV
			}
			GPIO_PORTE_IM_R |= 1<< Pin ; //unmasked 
			Init_Interupt_NVIC( 4 , Priority ); //init the interupt
			break;
		}
		case 5 :{ //Case POrtF
			GPIO_PORTF_ICR_R = 0xFF ; // clear any from GPIO interupt
			GPIO_PORTF_IM_R  |= 0<< Pin ;    // Masked the interupt for configuration
			GPIO_PORTF_IS_R	 |= Level_or_Edge << Pin ; // Select if the interupt pin triggerd upon Level or edge
			GPIO_PORTF_IEV_R |= Falling_or_Rising << Pin ;
			if(Single_Both_edge != 2){
			GPIO_PORTF_IBE_R |= Single_Both_edge << Pin; //select if the interupt will be triggerd in both edges
			}
			else{
				GPIO_PORTF_IBE_R |= 0 << Pin ; //controlled by IEV
			}
			GPIO_PORTF_IM_R |= 1<< Pin ; //unmasked 
			Init_Interupt_NVIC( 30 , Priority ); //init the interupt
			break;
		}
		default:
			break;
	}
}