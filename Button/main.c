/**
 * author: AimerNeige
 * generation time: 2021/01/25
 * filename: main.c
 * language & build version : C 11
*/

#include <reg51.h>

sbit led1 = P1^0;
sbit led2 = P1^1;
sbit led3 = P1^2;
sbit led4 = P1^3;
sbit led5 = P1^4;
sbit led6 = P1^5;
sbit led7 = P1^6;
sbit led8 = P1^7;

sbit k1 = P3^4;
sbit k2 = P3^5;
sbit k3 = P3^6;
sbit k4 = P3^7;

void main()
{
	P1 = 0xff;
	while (1)
	{
		led1 = k1;
		led2 = k1;
		led3 = k2;
		led4 = k2;
		led5 = k3;
		led6 = k3;
		led7 = k4;
		led8 = k4;
	}
}
