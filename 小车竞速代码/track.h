#ifndef __track_H__
#define __track_H__
#include<reg52.h>
#include "basic.h"
//寻迹LED指示灯定义
sbit Left_track_led=P3^5;	 //左寻迹红外传感器      
sbit Right_track_led=P3^6;	 //右寻迹红外传感器

sbit Left_avoid_led=P3^7;	 //左避障红外传感器      
sbit Right_avoid_led=P3^4;	 //右避障红外传感器
sbit beep=P2^6;

void infrared_track(void);  
void infrared_avoid(void); 
void infrared_follow(void);

#endif
