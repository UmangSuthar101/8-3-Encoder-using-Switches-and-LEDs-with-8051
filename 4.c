#include<reg51.h>
 
 sbit Switch1  = P1^0;    //pin connected to toggle Led 
 sbit Switch2 = P1^1;
 sbit Switch3 = P1^2;
 sbit Switch4 = P1^3;
 sbit Switch5 = P1^4;
 sbit Switch6 = P1^5;
 sbit Switch7 = P1^6;
 sbit Switch8 = P1^7;
 sbit Led1 =  P0^0;  //Pin connected to toggle led
 sbit Led2 = P0^1;
 sbit Led3 = P0^2;
  
void main()
{
	while(1)
	{
		Led1 = Led2 = Led3 = 0;
		if(Switch8 == 1 && Switch7 == 1 && Switch6 == 1 && Switch5 == 1 && Switch4 == 1 && Switch3 == 1 && Switch2 == 1 && Switch1 == 0)
		{	
			Led1 = Led2 = Led3 = 0;
		}
		if(Switch8 == 1 && Switch7 == 1 && Switch6 == 1 && Switch5 == 1 && Switch4 == 1 && Switch3 == 1 && Switch2 == 0 && Switch1 == 1)
		{	
			Led1 = 1;
		}
		if(Switch8 == 1 && Switch7 == 1 && Switch6 == 1 && Switch5 == 1 && Switch4 == 1 && Switch3 == 0 && Switch2 == 1 && Switch1 == 1)
		{	
			Led2 = 1;
		}
		if(Switch8 == 1 && Switch7 == 1 && Switch6 == 1 && Switch5 == 1 && Switch4 == 0 && Switch3 == 1 && Switch2 == 1 && Switch1 == 1)
		{	
			Led1 = Led2 = 1;
		}
		if(Switch8 == 1 && Switch7 == 1 && Switch6 == 1 && Switch5 == 0 && Switch4 == 1 && Switch3 == 1 && Switch2 == 1 && Switch1 == 1)
		{	
			Led3 = 1;
		}
		if(Switch8 == 1 && Switch7 == 1 && Switch6 == 0 && Switch5 == 1 && Switch4 == 1 && Switch3 == 1 && Switch2 == 1 && Switch1 == 1)
		{	
			Led1 = Led3 = 1;
		}
		if(Switch8 == 1 && Switch7 == 0 && Switch6 == 1 && Switch5 == 1 && Switch4 == 1 && Switch3 == 1 && Switch2 == 1 && Switch1 == 1)
		{	
			Led2 = Led3 = 1;
		}
		if(Switch8 == 0 && Switch7 == 1 && Switch6 == 1 && Switch5 == 1 && Switch4 == 1 && Switch3 == 1 && Switch2 == 1 && Switch1 == 1)
		{	
			Led1 = Led2 = Led3 = 1;
		}
	}
}