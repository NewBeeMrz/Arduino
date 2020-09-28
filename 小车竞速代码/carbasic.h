
#ifndef __CARBASIC_H__
#define __CARBASIC_H__

#include "basic.h"

//控制板跳线帽接法 
//J6-1 P1.0至P1.7 IO口处跳线帽全部接上 	 
//J6-2 驱动使能EN1 NE2 EN3 NE4全部接线。
//J6-3 PWM控制全部不接跳线帽

//定义小车驱动模块输入IO口
sbit IN1=P1^0;	   //  右1电机	   高电平前进 
sbit IN2=P1^1;	   //  右1电机     高电平后退
sbit IN3=P1^2;	   //  右2电机     高电平后退
sbit IN4=P1^3;	   //  右2电机     高电平前进

sbit IN5=P1^4;	   //  左1电机     高电平前进
sbit IN6=P1^5;	   //  左1电机     高电平后退
sbit IN7=P1^6;	   //  左2电机     高电平后退
sbit IN8=P1^7;	   //  左2电机     高电平前进

//J6-2连接跳线帽，则EN直接接高电平
//如果把J6-3的跳线帽连上，则对应的连线如下
//sbit EN1=P1^1; // 高电平使能 	 右1电机
//sbit EN2=P1^3; // 高电平使能 	 右2电机
//sbit EN3=P1^5; // 高电平使能 	 左1电机
//sbit EN4=P1^7; // 高电平使能   左2电机

//不连接J6-3的跳线帽，改为用杜邦线将EN与P2.0~P2.3连接
sbit EN1=P2^0; // 高电平使能   右1电机
sbit EN2=P2^1; // 高电平使能   右2电机
sbit EN3=P2^2; // 高电平使能   左1电机
sbit EN4=P2^3; // 高电平使能   左2电机

void forward(void);	
void back(void);
void stop(void); 
void circle_right(void);
void circle_left(void);
void turn_right(void);
void turn_left(void);
void motor_init(void);
void back_circle_left(void);
void back_circle_right(void);
void forward_right(void);
void forward_left(void);
#endif