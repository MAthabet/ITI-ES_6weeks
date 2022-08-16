/*
 * main.c
 *
 * Created: 8/15/2022 7:37:50 AM
 *  Author: M-aa2
 */ 

#include <xc.h>
#include <avr/io.h>
#include <util/delay.h>
#define DELAY_SEC 1000
int main(void)
{	DDRC = 0xFF;
    while(1)
    {
         PORTC = 0b01111110; //display 0
		 _delay_ms(DELAY_SEC);
		 PORTC = 0b00001100; //display 1
		 _delay_ms(DELAY_SEC);
		 PORTC = 0b10110110; //display 2
		 _delay_ms(DELAY_SEC);
		 PORTC = 0b10011110; //display 3
		 _delay_ms(DELAY_SEC);
		 PORTC = 0b11001100; //display 4
		 _delay_ms(DELAY_SEC);
		 PORTC = 0b11011010; //display 5
		 _delay_ms(DELAY_SEC);
    }
}