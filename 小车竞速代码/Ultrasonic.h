#ifndef __ULTRASONIC_H__
#define __ULTRASONIC_H__

#include "basic.h"
#include "delay.h"
#include "carbasic.h"

sbit ECHO = P2^4;                        //回声接收端口	   
sbit TRIG = P2^5;                        //超声触发端口	
sbit STEER=P2^7;
//sbit beep=P2^6;

void timer0_init(void);	//用于超声波测距
void timer0_start();
void timer0_stop();

void StartModule(void);//发出触发信号，开始测距
void distance(void);
void Timer_Count(void);//算定时时长
void ultrasonic_once(void);//一次完成的测距过程
void car_ultrasonic(void);
void steerMoto_move(uchar pwmDuty);
uchar steerMoto_getPosition();
void steerMoto_reset();
void car_avoid_move(uchar pos);


#endif