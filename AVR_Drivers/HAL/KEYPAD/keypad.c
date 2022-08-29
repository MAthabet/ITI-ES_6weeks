/*
 * CFile1.c
 *
 * Created: 26/08/2022 11:53:01
 *  Author: M-aa2
 */ 
#include <stdint.h>
#include "Keypad.h"
#include "Keypad_config.h"
#include "../../MCAL/dio/dio.h"

void Keypad_init(void)
{
	/* Set Columns direction to Output and level to High*/
	for(uint8_t i = 0; i < KEYPAD_COL_NUM; i++)
	{
		set_pin_direction(keypad_col_portpin_arr[i].port, keypad_col_portpin_arr[i].pin, OUTPUT);
	}
	/* Set Rows direction to Input */
	for(uint8_t i = 0; i < KEYPAD_ROW_NUM; i++)
	{
		set_pin_direction(keypad_row_portpin_arr[i].port, keypad_row_portpin_arr[i].pin, INPUT);
		set_pin_level(keypad_row_portpin_arr[i].port, keypad_row_portpin_arr[i].pin, HIGH);
	}
}

uint8_t Keypad_getPressedButtonValue()
{
	for(uint8_t i = 0; i < KEYPAD_COL_NUM; i++)
	{
		set_pin_level(keypad_col_portpin_arr[i].port, keypad_col_portpin_arr[i].pin, HIGH);
	}
	for(uint8_t c = 0; c < KEYPAD_COL_NUM; c++)
	{
		set_pin_level(keypad_col_portpin_arr[c].port, keypad_col_portpin_arr[c].pin, LOW);
		for(uint8_t r = 0; r < KEYPAD_ROW_NUM; r++)
		{
			if (get_pin_level(keypad_row_portpin_arr[r].port, keypad_row_portpin_arr[r].pin) == LOW) return keypad_key_value[r][c];
		}
		set_pin_level(keypad_col_portpin_arr[c].port, keypad_col_portpin_arr[c].pin, HIGH);
	}
	return 0;
}