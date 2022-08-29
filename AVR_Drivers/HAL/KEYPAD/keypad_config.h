/*
 * keybad_config.h
 *
 * Created: 26/08/2022 11:52:55
 *  Author: M-aa2
 */ 
#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_

#include "../../MCAL/dio/dio.h"

#define KEYPAD_ROW_NUM 4
#define KEYPAD_COL_NUM 4

/**** Columns Definition ****/
#define KEYPAD_COL_PORTPIN_ARR {\
	{DIOA, P0},\
	{DIOA, P1},\
	{DIOA, P2},\
	{DIOA, P3},\
}
portpin_t keypad_col_portpin_arr[KEYPAD_COL_NUM] = KEYPAD_COL_PORTPIN_ARR;
/**** Rows Definition ****/
#define KEYPAD_ROW_PORTPIN_ARR {\
	{DIOB, P0},\
	{DIOB, P1},\
	{DIOB, P2},\
	{DIOB, P3},\
}
portpin_t keypad_row_portpin_arr[KEYPAD_ROW_NUM] = KEYPAD_ROW_PORTPIN_ARR;
/**** Key Definition ****/
#define KEYPAD_KEY_VALUE {\
	{'7','8','9','/'},	\
	{'4','5','6','*'},	\
	{'1','2','3','-'},	\
	{'#','0','=','+'},	\
}
char keypad_key_value[KEYPAD_ROW_NUM][KEYPAD_COL_NUM] = KEYPAD_KEY_VALUE;
#endif /* KEYPAD_CONFIG_H_ */
