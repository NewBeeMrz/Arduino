#ifndef __ULTRASONIC_H__
#define __ULTRASONIC_H__

#include "basic.h"
#include "delay.h"
#include "carbasic.h"

sbit ECHO = P2^4;                        //�������ն˿�	   
sbit TRIG = P2^5;                        //���������˿�	
sbit STEER=P2^7;
//sbit beep=P2^6;

void timer0_init(void);	//���ڳ��������
void timer0_start();
void timer0_stop();

void StartModule(void);//���������źţ���ʼ���
void distance(void);
void Timer_Count(void);//�㶨ʱʱ��
void ultrasonic_once(void);//һ����ɵĲ�����
void car_ultrasonic(void);
void steerMoto_move(uchar pwmDuty);
uchar steerMoto_getPosition();
void steerMoto_reset();
void car_avoid_move(uchar pos);


#endif