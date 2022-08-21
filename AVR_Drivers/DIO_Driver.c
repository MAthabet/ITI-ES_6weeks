#include "DIO_Driver.h"
#include <stdio.h>
#include <avr/io.h>
#include <stdint.h>
#include <errno.h>

/**
 * @brief 
 * Set DIO pins direction and level 
 * get DIO pins level (HIGH, LOW)
 * @param PORTx: Specifies the PORT num where x equals A,B,C,D
 * @param PINx: Specifies the PIN num where x equals 0-7 (or not to set for the whole port)
 * @param direction : 
 * 						this value must be type of direction_t (INPUT, OUTPUT)
 * @example: 
 * set_direction(DIOA, PIN4, OUTPUT);
 * set_level(DIOA, 4, OUTPUT); //you can just type pin number  insted of PINx
 * get_level(DIOC, 0)
 */

void set_port_direction(port_t port, direction_t direction)
{
    switch(port)
    {
        case DIOA:
            DDRA = 0x00;
            if (direction) DDRA = 0b11111111;
            break;
        case DIOB:
            DDRB = 0x00;
            if (direction) DDRB = 0b11111111;
            break;
        case DIOC:
            DDRC = 0x00;
            if (direction) DDRC = 0b11111111;
            break;
        case DIOD:
            DDRD = 0x00;
            if (direction) DDRD = 0b11111111;
            break;

        default:
            perror("PORT is out of range");
            break;
    }
}
void set_pin_direction(port_t port, pin_t pin, direction_t direction)
{
    switch(port)
    {
        case DIOA:
            DDRA &= ~(1<<pin); //clear bit
            DDRA |= (direction<<pin); //set value
            break;
        case DIOB:
            DDRB &= ~(1<<pin); //clear bit
            DDRB |= (direction<<pin); //set value
            break;
        case DIOC:
            DDRC &= ~(1<<pin); //clear bit
            DDRC |= (direction<<pin); //set value
            break;
        case DIOD:
            DDRD &= ~(1<<pin); //clear bit
            DDRD |= (direction<<pin); //set value
            break;

        default:
            perror("PORT is out of range");
            break;
    }
}
void set_port_level(port_t port, level_t level)
{
    switch(port)
    {
        case DIOA:
            PORTA = 0x00;
            if(level) PORTA = 0b11111111;
            break;
        case DIOB:
            PORTB = 0x00;
            if(level) PORTB = 0b11111111;
            break;
        case DIOC:
            PORTC = 0x00;
            if(level) PORTC = 0b11111111;
            break;
        case DIOD:
            PORTD = 0x00;
            if(level) PORTD = 0b11111111;
            break;

        default:
            perror("PORT is out of range");
            break;
    }
}
void set_port_pins(port_t port, uint8_t binNum)
{
    switch(port)
    {
        case DIOA:
            PORTA = binNum;
            break;
        case DIOB:
            PORTB = binNum;
            break;
        case DIOC:
            PORTC = binNum;
            break;
        case DIOD:
            PORTD = binNum;
            break;

        default:
            perror("PORT is out of range");
            break;
    }
}
void set_pin_level(port_t port, pin_t pin, level_t level)
{
    switch(port)
    {
        case DIOA:
            PORTA &= ~(1<<pin); //clear bit
            PORTA |= (level<<pin); //set value
            break;
        case DIOB:
            PORTB &= ~(1<<pin); //clear bit
            PORTB |= (level<<pin); //set value
            break;
        case DIOC:
            PORTC &= ~(1<<pin); //clear bit
            PORTC |= (level<<pin); //set value
            break;
        case DIOD:
            PORTD &= ~(1<<pin); //clear bit
            PORTD |= (level<<pin); //set value
            break;

        default:
            perror("PORT is out of range");
            break;
    }
}
level_t get_level(port_t port, pin_t pin)
{
    switch(port)
    {
        case DIOA:
            return 0b01 & (PORTA>>pin);
            break;
        case DIOB:
            return 0b01 & (PORTB>>pin);
            break;
        case DIOC:
            return 0b01 & (PORTC>>pin);
            break;
        case DIOD:
            return 0b01 & (PORTD>>pin);
            break;

        default:
            perror("PORT is out of range");
            break;
    }
	return -1;
}
