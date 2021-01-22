/**
 * author: AimerNeige
 * generation time: 2021/01/22
 * filename: main.c
 * language & build version : C 11
*/
#include <reg52.h>

#define ON  1
#define OFF 0

sbit fm = P2^3;

void delay(void)   //误差 -0.000000000023us
{
    unsigned char a,b;
    for(b=221;b>0;b--)
        for(a=207;a>0;a--);
}

void main()
{
	while (1) {
		fm = ON;
		delay();
		fm = OFF;
		delay();
	}
}