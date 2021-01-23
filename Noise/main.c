/**
 * author: AimerNeige
 * generation time: 2021/01/23
 * filename: main.c
 * language & build version : C 11
*/

#include <reg52.h>

#define ON  0
#define OFF 1

sbit fm = P2^3;

void delay(unsigned int xms)
{
    unsigned int i, j;
    for(i=xms;i>0;i--)
		for(j=112;j>0;j--);
}

void main()
{
	while (1) {
		fm = ON;
		delay(80);
		fm = OFF;
		delay(80);
	}
}