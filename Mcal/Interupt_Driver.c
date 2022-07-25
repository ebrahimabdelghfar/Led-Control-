#include "ports.h"
#include "types.h""
#include "tm4c123gh6pm.h"
#include <errno.h>

/*
Description: This fuction is used to initiate interupt

parameters: Port




*/
void Init_Interupt_NVIC( uint8 Handler_IRQ,uint8 priority ){
	/*Enable Nvic interupt handler by taking the IRQ number from user*/
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
	else{
		 perror("Unvalid IRQ number");
	}
	/*End*/
	
	/*define the priority*/
	
	/*end*/
}
void Attach_Interupt(uint8 Port , uint8 Pin , uint8 level_or_edge,uint8 Falling_or_Rising ,uint8 Priority ){
}