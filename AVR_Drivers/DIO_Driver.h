#ifndef MCAL_DIO_H_
#define MCAL_DIO_H_

#include <stdint.h>

typedef enum
{
	DIOA,
	DIOB,
	DIOC,
	DIAOD,
} port_t;

typedef enum
{
	P0,
	P1,
	P2,
	P3,
	P4,
	P5,
	P6,
	P7,
} pin_t;

typedef enum
{
	INPUT,
	OUTPUT,
}direction_t;

typedef enum
{
	LOW,
	HIGH,
}level_t;

void set_port_direction(port_t port, direction_t direction); //set direction for every pin in the port
void set_pin_direction(port_t port, pin_t pin, direction_t direction);
void set_port_level(port_t port, level_t level); //set level for every pin in the port
void set_port_pins(port_t port, uint8_t binNum); //write binary number in port
void set_pin_level(port_t port, pin_t pin, level_t level);
level_t get_level(port_t port, pin_t pin);

#endif
