#include "types.h"
void Init_Timer(uint32 Timer,uint8 Timer_A_or_B,uint8 wide_or_normal,uint32 Timer_Config,uint8 Mode,uint8 Counting_Direction);
void Delay_MS(uint8 Timer_No,uint8 wide_or_normal,uint32 delay_time);
void Delay_uS(uint8 Timer_No,uint8 wide_or_normal,uint32 delay_time);
void set_dimming_time_ms(uint8 Timer_No,uint8 wide_or_normal,uint32 delay_time);