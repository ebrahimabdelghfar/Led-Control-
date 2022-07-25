enum P {  //select the wanted port
    port_A =0,
    port_B,
    port_C,
    port_D,
    port_E,
    port_F
};
enum operation { //the operation I want
    Direction=0,
    digital,

};
enum Dir{ //Direction of the port
    input=0,
    output
};
enum Status{ //status of the either High or LOW
    LOW=0,
    HIGH
};
enum Digital_enable{
  disable=0,
  enable
};
enum pin_portF{
  switch_0=0,
  R_led,
  B_led,
  G_Led,
  switch_4
};
enum Timer{
  Timer_0=0,
	Timer_1,
	Timer_2,
	Timer_3,
	Timer_4,
	Timer_5
};

enum Norm_Or_Wide{
  Norm=0,
	Wide
};

enum Wide_Timer_Cfg{
  _64_Wide_Bit=0,
	_32_Wide_Bit=4
};
enum Norm_Timer_Cfg{
  _32_Norm_Bit=0,
	_16_Norm_Bit=4
};

enum Timer_Mode{
	One_shot_Mode=1,
	Periodic_Mode,
	Capture_Mode
};

enum Counting_Direction{
	Down_Counting=0,
	Up_Counting
};
enum Timer_A_or_B{
	Timer_A=0,
	Timer_B=8
};