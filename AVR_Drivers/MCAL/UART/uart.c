/*
 * uart.c
 *
 * Created: 28/08/2022 21:42:43
 *  Author: M-aa2
 */ 
#include "uart.h"
#include "../MCAL/dio/dio.h"

void uart_init()
{
	//access UCSRC
	UCSRC |= 1 << URSEL;
	//Asynchronous Operation
	UCSRC &= ~(1 << UMSEL);
	//enable rx, tx
	UCSRB |= 1 << RXEN;
	UCSRB |= 1 << TXEN;
	//data size 8bit
	UCSRB &= ~(1 << UCSZ2);
	UCSRC |= 1 << UCSZ1; 
	UCSRC |= 1 << UCSZ0; 
	/*
	//entrupt enable
	SREG  |= 1 << I;
	UCSRB |= 1 << RXCIE;
	UCSRB |= 1 << TXCIE;
	UCSRB |= 1 << UDRIE;
	*/
	//entrupt disable
	UCSRB &= ~(1 << RXCIE);
	UCSRB &= ~(1 << TXCIE);
	UCSRB &= ~(1 << UDRIE);	
	//speed 1x
	UCSRA &= ~(1 << U2X);
	//disable parity mode
	UCSRC &= ~(1 << UPM0);
	UCSRC &= ~(1 << UPM1);
	//stop bits number : 1 bit
	UCSRC &= ~(1 << USBS);
	//baud rate Fosc = 8MHZ U2X = 0 BR = 9600
	UBRR = 51;

}
void uart_send_data(uint8_t)
{
	/* Wait for transmit buffer to be empty */
	while ((UCSRA >> UDRE & 0b01) == 0);
	/* Put data into UDR*/
	UDR = data;
}
uint8_t uart_receive_data()
{
	/* Wait for data to be received */
	while ((UCSRA >> RXC & 0b01) == 0);
	/* Get and return received data from buffer */
	return UDR;
}
/*uint8_t uart_is_data_ready()
{
	
}
void uart_set_tx_callback()
{
	
}
void uart_set_rx_callback()
{
	
}*/
