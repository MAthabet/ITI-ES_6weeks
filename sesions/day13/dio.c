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
void dio_set_direction(dio_t PORTx, uint8_t pin, dio_direction_t direction)
{
	switch (PORTx)
	{
	case DIOA:
		DDRA &= ~(0x01<<pin)   // clear bit
		DDRA |= direction << pin; // set value
		break;
	case DIOB:
		DDRB &= ~(0x01<<pin)   // clear bit
		DDRB |= direction << pin; // set value
		break;
	case DIOC:
		DDRC &= ~(0x01<<pin)   // clear bit
		DDRC |= direction << pin; // set value
		break;
	case DIOD:
		DDRD &= ~(0x01<<pin)   // clear bit
		DDRD |= direction << pin; // set value
		break;
	
	default:
		//report error
		break;
	}
}

void dio_set_level(dio_t port, dio_pin_t pin, dio_level_t value)
{
	switch(port)
	{
		case DIOA:
			PORTA &= ~(0x01<<pin);
			PORTA |= value<<pin;
			break;
		case DIOB:
			PORTB &= ~(0x01<<pin);
			PORTB |= value<<pin;
			break;
		case DIOC:
			PORTC &= ~(0x01<<pin);
			PORTC |= value<<pin;
			break;
		case DIOD:
			PORTD &= ~(0x01<<pin);
			PORTD |= value<<pin;
			break;

		default:
			//report error
		break;
	}
}

dio_level_t dio_get_level(dio_t port, dio_pin_t pin)
{
	switch(port)
	{
		case DIOA:
			return 0x01 & (PORTA>>pin);
			break;
		case DIOB:
			return 0x01 & (PORTB>>pin);
			break;
		case DIOC:
			return 0x01 & (PORTC>>pin);
			break;
		case DIOD:
			return 0x01 & (PORTD>>pin);
			break;

		default:
			//report error
		break;
	}	
}

