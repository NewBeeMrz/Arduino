
#ifndef __CARBASIC_H__
#define __CARBASIC_H__

#include "basic.h"

//���ư�����ñ�ӷ� 
//J6-1 P1.0��P1.7 IO�ڴ�����ñȫ������ 	 
//J6-2 ����ʹ��EN1 NE2 EN3 NE4ȫ�����ߡ�
//J6-3 PWM����ȫ����������ñ

//����С������ģ������IO��
sbit IN1=P1^0;	   //  ��1���	   �ߵ�ƽǰ�� 
sbit IN2=P1^1;	   //  ��1���     �ߵ�ƽ����
sbit IN3=P1^2;	   //  ��2���     �ߵ�ƽ����
sbit IN4=P1^3;	   //  ��2���     �ߵ�ƽǰ��

sbit IN5=P1^4;	   //  ��1���     �ߵ�ƽǰ��
sbit IN6=P1^5;	   //  ��1���     �ߵ�ƽ����
sbit IN7=P1^6;	   //  ��2���     �ߵ�ƽ����
sbit IN8=P1^7;	   //  ��2���     �ߵ�ƽǰ��

//J6-2��������ñ����ENֱ�ӽӸߵ�ƽ
//�����J6-3������ñ���ϣ����Ӧ����������
//sbit EN1=P1^1; // �ߵ�ƽʹ�� 	 ��1���
//sbit EN2=P1^3; // �ߵ�ƽʹ�� 	 ��2���
//sbit EN3=P1^5; // �ߵ�ƽʹ�� 	 ��1���
//sbit EN4=P1^7; // �ߵ�ƽʹ��   ��2���

//������J6-3������ñ����Ϊ�öŰ��߽�EN��P2.0~P2.3����
sbit EN1=P2^0; // �ߵ�ƽʹ��   ��1���
sbit EN2=P2^1; // �ߵ�ƽʹ��   ��2���
sbit EN3=P2^2; // �ߵ�ƽʹ��   ��1���
sbit EN4=P2^3; // �ߵ�ƽʹ��   ��2���

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