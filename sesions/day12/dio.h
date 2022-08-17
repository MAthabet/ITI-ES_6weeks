/*
 * dio.h
 *
 *      Author: ASHRAF
 */

#ifndef MCAL_DIO_DIO_H_
#define MCAL_DIO_DIO_H_

typedef enum
{
    PORTA,
    PORTB,
    PORTC,
    PORTD,
} port_t;

typedef enum{
    PIN0,
    PIN1,
    PIN2,
    PIN3,
    PIN4,
    PIN5,
    PIN6,
    PIN7,
} dio_pin_t;

typedef enum
{
    INPUT = 0,
    OUTPUT = 1
} dio_direction_t;

typedef enum
{
    LOW = 0,
    HIGH = 1
} dio_level_t;

void dio_set_direction(port_t port, dio_pin_t pin, dio_direction_t direction);
void dio_set_level(port_t port, dio_pin_t pin, dio_level_t value);
dio_level_t dio_get_level(port_t port, dio_pin_t pin);

#endif /* MCAL_DIO_DIO_H_ */
