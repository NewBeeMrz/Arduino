#include "Timer.h"
#include "carbasic.h"

/*****************
  �����ж�ʱ��Ϊ0.25ms��pwm����Ϊ20ms,����80�ζ�ʱ������
******************/

uchar Pwm_Duty_motor = 0;
uchar Pwm_Steer_motor = 0;

void timer1_init(){
    TMOD = TMOD|0x20;
    TH1 = TL1 = 256-230;
    EA = 1;
    ET1 = 1;
    TR1 = 1;
}


void timer1_serve() interrupt 3{

    static uchar Pwm_Cnt_motor = 0;
	
	if(Pwm_Cnt_motor <= Pwm_Duty_motor){
		EN1=1;
        EN2=1;
        EN3=1;
        EN4=1;
	}else{
		EN1=0;
        EN2=0;
        EN3=0;
        EN4=0;	
	}

	/*if(Pwm_Cnt_motor <= Pwm_Steer_motor){
		steer = 1;
	
	}else{
		steer = 0;
	}*/

	++Pwm_Cnt_motor;
	if(Pwm_Cnt_motor >= 80)
		Pwm_Cnt_motor = 0;
}


