/*
 * uart.h
 *
 * Created: 28/08/2022 21:42:31
 *  Author: M-aa2
 */ 

#ifndef UART_H_
#define UART_H_

void uart_init();
void uart_send_data(uint8_t);
uint8_t uart_receive_data();
uint8_t uart_is_data_ready();
void uart_set_tx_callback();
void uart_set_rx_callback();

#endif /* UART_H_ */