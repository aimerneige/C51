/**
 * author: AimerNeige
 * generation time: 2021/03/13
 * filename: main.c
 * language & build version : C 11
*/

#include <reg52.h>
#include <stdlib.h>

void main() {
    P1 = 0x0f; // 0000 1111
    EX1 = 1; // INT1 中断允许
    EA = 1; // 全局中断打开
    IT1 = 1 ; // 触发方式为下降沿触发
    while(1) ;
}

void jump_low() interrupt 2
{
    P1 = ~P1;
}