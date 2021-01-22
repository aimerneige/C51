#include <reg51.h>

sbit led1 = P1^0;
sbit led2 = P1^1;
sbit led3 = P1^2;
sbit led4 = P1^3;
sbit led5 = P1^4;
sbit led6 = P1^5;
sbit led7 = P1^6;
sbit led8 = P1^7;

void main()
{
	led1 = 0;
	led2 = 0;
	led3 = 0;
	led4 = 0;
	led5 = 0;
	led6 = 0;
	led7 = 0;
	led8 = 0;
	while(1);
}
