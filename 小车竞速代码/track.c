#include "track.h"	     
#include "basic.h"
#include "carbasic.h"
#include "delay.h"

extern uchar Pwm_Duty_motor;

void infrared_track(void){
		if(Left_track_led == 1 && Right_track_led == 0){
			Pwm_Duty_motor = 80;
			while(Left_track_led == 1 && Right_track_led == 0){
				circle_left();
				if(!Left_track_led)
					break;
			}
		}else if(Left_track_led == 0 && Right_track_led == 1){
			Pwm_Duty_motor = 80;
			while(Left_track_led == 0 && Right_track_led == 1){
				circle_right();
				if(!Right_track_led)
					break;
			}
		}else if(Right_track_led & Left_track_led){
				forward();
				beep = ~beep;
				DelayMs(100);
			
		}else if(Left_avoid_led ==1 && Right_avoid_led ==0){
			Pwm_Duty_motor = 35;
			circle_left();
			DelayMs(1);	
		}else if(Left_avoid_led ==0 && Right_avoid_led ==1){
			Pwm_Duty_motor = 35;
			circle_right();
			DelayMs(1);
		}else if(Left_avoid_led ==0 && Right_avoid_led ==0){
			stop();
		}else{
			Pwm_Duty_motor = 30;
			forward();
		}
}


