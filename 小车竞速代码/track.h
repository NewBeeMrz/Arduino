#ifndef __track_H__
#define __track_H__
#include<reg52.h>
#include "basic.h"
//Ѱ��LEDָʾ�ƶ���
sbit Left_track_led=P3^5;	 //��Ѱ�����⴫����      
sbit Right_track_led=P3^6;	 //��Ѱ�����⴫����

sbit Left_avoid_led=P3^7;	 //����Ϻ��⴫����      
sbit Right_avoid_led=P3^4;	 //�ұ��Ϻ��⴫����
sbit beep=P2^6;

void infrared_track(void);  
void infrared_avoid(void); 
void infrared_follow(void);

#endif
