/**
 * author: AimerNeige
 * generation time: 2021/01/22
 * filename: main.c
 * language & build version : C 11
*/
#include <REG52.H>

sbit led1 = P1^0;
sbit led2 = P1^1;
sbit led3 = P1^2;
sbit led4 = P1^3;
sbit led5 = P1^4;
sbit led6 = P1^5;
sbit led7 = P1^6;
sbit led8 = P1^7;

void delay(void)   //误差 -0.000000000023us
{
    unsigned char a,b;
    for(b=221;b>0;b--)
        for(a=207;a>0;a--);
}

void main()
{
	while(1) {
		led1 = 0;
		delay();
		led1 = 1;

		led2 = 0;
		delay();
		led2 = 1;

		led3 = 0;
		delay();
		led3 = 1;
		
		led4 = 0;
		delay();
		led4 = 1;
		
		led5 = 0;
		delay();
		led5 = 1;
		
		led6 = 0;
		delay();
		led6 = 1;
		
		led7 = 0;
		delay();
		led7 = 1;
		
		led8 = 0;
		delay();
		led8 = 1;
	}
}