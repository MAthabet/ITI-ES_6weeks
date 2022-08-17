#include <avr/io.h>
#include <avr/delay.h>

#include "mcal/dio/dio.h"

#define GREEN_LED_PORT     DIOB
#define GREEN_LED_PIN      PIN_0

#define RED_LED_PORT       DIOB
#define RED_LED_PIN        PIN_1

#define SWITCH_PORT        DIOA
#define SWITCH_PIN         PIN_0

#define SWITCH_PRESSED     LOW
#define SWITCH_RElEASED    HIGH


void main()
{
//	DDRB = 0b011; // B0,B1 are outputs
//	DDRA = 0;    // all pins are inputs
	dio_set_direction(SWITCH_PORT, SWITCH_PIN, INPUT);
	dio_set_direction(RED_LED_PORT, RED_LED_PIN, OUTPUT);
	dio_set_direction(GREEN_LED_PORT, GREEN_LED_PIN, OUTPUT);

	while(1)
	{
		// if(PINA == 0b00)
		// {
		// 	PORTB = 0b011;
		// }
		// else if(PINA == 0b01)
		// {
		// 	PORTB = 0;
		// }
		if(dio_get_level(SWITCH_PORT, SWITCH_PIN) == SWITCH_PRESSED)
		{
			dio_set_level(DIOB, PIN_0, HIGH);
			dio_set_level(DIOB, PIN_1, HIGH);
		}
		else
		{
			dio_set_level(DIOB, PIN_0, LOW);
			dio_set_level(DIOB, PIN_1, LOW);
		}
	}

}
