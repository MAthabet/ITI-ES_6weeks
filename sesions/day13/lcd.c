#include "dio.h"
#include <avr/io.h>
#include <stdint.h>

void lcd_init()
{
    dio_set_direction(LCD_PORT, LCD_RS, OUTPUT);
    dio_set_level(LCD_PORT, LCD_RS, LOW);
    dio_set_direction(LCD_PORT, LCD_RW, OUTPUT);
    dio_set_level(LCD_PORT, LCD_RW, LOW);

}
void lcd_send_cmd()
{

}
void lcd_send_data()
{

}