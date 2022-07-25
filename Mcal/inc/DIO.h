#include "types.h"
void  Port_Init(uint8 port);
void  Pin_Direction(uint8 Port,uint8 pin,uint8 Direction);
void  Pin_DEN(uint8 Port,uint8 pin,uint8 DEN)     ;
void  Pin_Write(uint8 Port,uint8 pin,uint8 Status);
void  Pin_PullUP(uint8 port,uint8 location_button);
uint8 Pin_Read(uint8 port,uint8 location_button) ;
void  Pin_Clear(uint8 port,uint8 pin);
