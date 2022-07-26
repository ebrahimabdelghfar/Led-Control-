#include "types.h"
void Init_Interupt_NVIC( uint8 Handler_IRQ,uint8 priority );
void Attach_Interupt_For_GPIO(uint8 Port , uint8 Pin , uint8 Level_or_Edge ,uint8 Falling_or_Rising,uint8 Single_Both_edge,uint8 Priority);