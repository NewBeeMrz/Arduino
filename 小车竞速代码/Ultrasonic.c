#include "Ultrasonic.h"
#include "delay.h"
#include "basic.h"
#include "uart.h"
#include "carbasic.h"
#include <stdio.h>
#include <string.h>

uint dis = 0;//��������õľ���
bit timer0_Overflag = 0;
bit move_flag = 0;
void timer0_init(void){
	TMOD = TMOD|0x01;
	EA = 1;
	ET0 = 1;
}

void timer0_start(){
	TH0 = TL0 = 0;
	TR0 = 1;
}



void timer0_stop(){
	TR0 = 0;
}

void timer0_serv() interrupt 1{
	ECHO = 0;//ǿ�ƽ�ECHO��Ϊ0
	timer0_Overflag = 1;
}

void StartModule(void){//����trig�źţ���������
	TRIG = 1;
	DelayUs2x(6);
	TRIG = 0;
}

void Timer_Count(void){//����ECHO�źŵĳ���ʱ��
	while(!ECHO);
	timer0_start();
	while(ECHO);
	timer0_stop();
}
void distance(void){
	uchar disStr[20]="";
	uint time;
	time = TH0*256+TL0;
	if(timer0_Overflag){
		timer0_Overflag = 0;
		//beep = 0;
		//DelaySec(1);
		//beep = 1;
		dis = 65535;
	}else{
		dis = time*0.01845;//��ȷ�����ף���λҲ������
	}
	sprintf(disStr," %u ",dis);//��ӡ���̶�������
	Uart_SendStr(disStr);
}

void car_ultrasonic(void){
	 if(dis <= 20){
		move_flag = 1;
	}else{
		move_flag = 0;
	}
}

void ultrasonic_once(void){//һ����ɵĲ�����
	StartModule();
	Timer_Count();
	distance();
	car_ultrasonic();
}



