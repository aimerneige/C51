/**
 * author: AimerNeige
 * generation time: 2021/03/13
 * filename: main.c
 * language & build version : C 11
*/

#include <reg52.h>
#include <stdlib.h>

void delay(unsigned int xms)
{
    unsigned int i, j;
    for (i=xms;i>0;i--)
        for (j=112;j>0;j--) ;
}

void main() {
    P1 = 0x0f; // 0000 1111
    EX0 = 1; // INT0 中断允许
    EA = 1; // 全局中断打开
    IT0 = 0; // 触发方式为低电平触发
    while(1) ;
}

void low() interrupt 0
{
    P1 = ~P1;
    delay(200);
}