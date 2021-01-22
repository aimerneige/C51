/**
 * author: AimerNeige
 * generation time: 2021/01/22
 * filename: main.c
 * language & build version : C 11
*/
#include <reg52.h>
#include <intrins.h>

void delay(void)   //误差 -0.000000000023us
{
    unsigned char a,b;
    for(b=221;b>0;b--)
        for(a=207;a>0;a--);
}

void main()
{
	int i = 0;
	while (1) {
		P1 = 0xfe;
		for (i = 0; i < 8; i++) {
			delay();
			P1 <<= 1;
			P1 = P1 | 0x01;
		}
	}
}