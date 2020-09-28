#include <reg52.h>
#include "uart.h"

void Uart_Init(void){
	//�ö�ʱ��2���д��ڷ������ݵĶ�ʱ
	SCON=0x50; //SM0 SM1 SM2 REN TB8 RB8 TI RI
 	RCAP2H=(65536-36)/256;//36:9600  3:115200
 	RCAP2L=(65536-36)%256;
 	TH2=RCAP2H;
 	TL2=RCAP2L;
 	T2CON=0x34; //TF2 EXF2 RCLK TCLK EXEN2 TR2 C/T2 CP/RL2 0011 0100
	PS = 1;
	EA=1;
	ES=1;
}
void Uart_SendStr(uchar *buf){
	uchar i=0;
	while(*(buf+i)!='\0'){
		SBUF=*(buf+i);	//����һ�δ��ڷ���
		while(!TI);	//�ȴ����ݷ������
		TI=0; //TI��0���ȴ��´η���׼��
		
		i++;		
	}	
}
