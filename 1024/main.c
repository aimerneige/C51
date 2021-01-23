/**
 * author: AimerNeige
 * generation time: 2021/01/23
 * filename: main.c
 * language & build version : C 11
*/

#include <reg52.h>

#define LED_0 0x3f
#define LED_1 0x06
#define LED_2 0x5b
#define LED_3 0x4f
#define LED_4 0x66
#define LED_5 0x6d
#define LED_6 0x7d
#define LED_7 0x07
#define LED_8 0x7f
#define LED_9 0x6f
#define LED_A 0x77
#define LED_B 0x7c
#define LED_C 0x39
#define LED_D 0x5e
#define LED_E 0x79
#define LED_F 0x71
#define LED__ 0x00

sbit led_1 = P2^4;
sbit led_2 = P2^5;
sbit led_3 = P2^6;
sbit led_4 = P2^7;

void delay(unsigned int xms)
{
	unsigned int i, j;
	for (i=xms;i>0;i--)
		for (j=112;j>0;j--);
}

void main()
{
	while(1)
	{
		led_1 = 1;
		led_2 = 0;
		led_3 = 0;
		led_4 = 0;
		P0 = LED_1;
		delay(1);
		led_1 = 0;
		led_2 = 1;
		led_3 = 0;
		led_4 = 0;
		P0 = LED_0;
		delay(1);
		led_1 = 0;
		led_2 = 0;
		led_3 = 1;
		led_4 = 0;
		P0 = LED_2;
		delay(1);
		led_1 = 0;
		led_2 = 0;
		led_3 = 0;
		led_4 = 1;
		P0 = LED_4;
		delay(1);
	}
}
