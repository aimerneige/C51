/**
 * author: AimerNeige
 * generation time: 2021/01/23
 * filename: main.c
 * language & build version : C 11
*/
#include <reg52.h>
#include <intrins.h>

#define ON  0
#define OFF 1

sbit fm = P2^3;

void delay(void)   //误差 -0.000000000023us
{
    unsigned char a,b;
    for(b=221;b>0;b--)
        for(a=207;a>0;a--);
}

void main()
{
	P1 = 0xfe;
	while (1) {
		delay();
		P1 = _crol_ (P1, 1);
		fm = ON;
		delay();
		fm = OFF;
	}
}