#include "delay.h"

void DelayUs2x(uchar t){   
	while(--t);
}

void DelayMs(uchar t){
	while(t--)	{
	    //大致延时1mS	
		DelayUs2x(245);
	    DelayUs2x(245);
	}
}

void DelaySec(uchar t){
	t=t*5;
	while(t--)	{
	    //大致延时1mS	
		
		DelayMs(200);
	}
}