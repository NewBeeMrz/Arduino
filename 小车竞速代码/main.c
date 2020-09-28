#include<reg52.h>
#include "delay.h"
#include "carbasic.h"
#include "basic.h"
#include "Timer.h"
#include "track.h"
#include "Ultrasonic.h"
#include "uart.h"

extern uchar Pwm_Duty_motor;
extern uchar Pwm_steer_motor;
void main(void){
	//timer0_init();
	//Uart_Init();
	timer1_init();
	motor_init();
	while(1){
		/*forward();
		ultrasonic_once();
		if(move_flag == 1){
			back();
			DelayMs(500);
			circle_right();
			DelayMs(1000);
		}*/
		
		infrared_track();
		 
		//infrared_avoid();

		/*Pwm_steer_motor = 2;
		DelaySec(1);
		Pwm_steer_motor = 4;
		DelaySec(1);
		Pwm_steer_motor = 6;
		DelaySec(1);
		Pwm_steer_motor = 8;
		DelaySec(1);
		Pwm_steer_motor = 10;
		DelaySec(1);		

		Pwm_Duty_motor = 30;
		forward();
		DelaySec(3);
		stop();
		DelaySec(1);
		Pwm_Duty_motor = 60;
		back();
		DelaySec(3);
		stop();
		DelaySec(1);

		

		Pwm_Duty_motor = 40;
		forward();
		DelaySec(3);
		stop();
		DelaySec(1);

		Pwm_Duty_motor = 40;
		forward_left();
		DelaySec(3);
		stop();
		DelaySec(1);
		
		Pwm_Duty_motor = 30;
		circle_right();
		DelaySec(3);
		stop();
		DelaySec(1);
		
		Pwm_Duty_motor = 70;
		circle_left();
		DelaySec(3);
		stop();
		DelaySec(1);*/		
	}

}		 
