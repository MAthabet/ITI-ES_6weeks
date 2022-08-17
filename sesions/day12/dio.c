/*
 * dio.c
 *
 *      Author: ASHRAF
 */

#include "dio.h"
#include <avr/io.h>
#include <stdint.h>



/**
 * @brief 
 * Set DIO pins direction
 * @param PORTx: Specifies the PORT num where x equals A,B,C,D
 * @param pin: 
 * @param direction : 
 * 						this value must be type of dio_direction_t
 * @example: 
 * dio_set_direction(PORTA, 4, OUTPUT);
 */
void dio_set_direction(port_t PORTx, uint8_t pin, dio_direction_t direction)
{
	switch (PORTx)
	{
	case PORTA:
		/* code */
		DDRA &= ~(0x01<<pin)   // clear bit
		DDRA |= direction << pin; // set value
		break;
	case PORTB:
		DDRB &= ~(0x01<<pin)   // clear bit
		DDRB |= direction << pin; // set value
		/* code */
		break;
	case PORTC:
		/* code */
		DDRC &= ~(0x01<<pin)   // clear bit
		DDRC |= direction << pin; // set value
		break;
	case PORTD:
		/* code */
		DDRD &= ~(0x01<<pin)   // clear bit
		DDRD |= direction << pin; // set value
		break;
	
	default:
		//report error
		break;
	}
}
