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
	P1 = 0xfe; // 1111 1110
	while(1) {
		delay();
		P1 = _crol_ (P1, 1); // P1 循环左移 1 位
	}
}