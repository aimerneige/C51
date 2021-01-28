/**
 * author: AimerNeige
 * generation time: 2021/01/28
 * filename: main.c
 * language & build version : C 11
*/

#include <reg52.h>

sbit led1 = P1^0;
sbit k1 = P3^4;

void delay(unsigned int xms)
{
    unsigned int i, j;
    for(i=xms;i>0;i--)
		for(j=112;j>0;j--);
}

void main()
{
    P1 = 0xff; // 熄灭所有 LED 灯
    while (1)
    {
        if (k1 == 0) {
            delay(10); // 延时 10 ms 消抖
            if (k1 == 0) { // 再次判断按键是否被按下
                while (k1 == 0); // 直到检测到按键松开
                led1 = ~led1;
            }
        }
    }
}
