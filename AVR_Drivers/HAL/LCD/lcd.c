#include "lcd.h"
#include "dio.h"
#include <stdio.h>
#include <avr/io.h>
#include <stdint.h>
#include <errno.h>
#include <util/delay.h>
#include "lcd_config.h"


void lcd_init()
{
    uint8_t fun_set = 0b00100000; //0b001DNF00
    fun_set |= (LCD_DATA_LENGTH<<4);
    fun_set |= (LCD_ROW<<3);
    fun_set |= (LCD_LINE<<2);

    set_pin_direction(LCD_RS_PORT, LCD_RS_PIN, OUTPUT);
    set_pin_direction(LCD_RW_PORT, LCD_RW_PIN, OUTPUT);
    set_pin_direction(LCD_EN_PORT, LCD_EN_PIN, OUTPUT);

    lcd_send_cmd(fun_set);
    lcd_send_cmd(1); //clear display (look up datasheet)
    lcd_send_cmd(2); //set DDRAM adress to 00H and return cruser to its original place
    lcd_send_cmd(6); //entery mode set from left to right
    lcd_send_cmd(15); //Display is on, Cursor and Cursor blinking is on (User can turn it off later) 00001DCB
    lcd_send_cmd(fun_set);
}

void lcd_send_cmd(uint8_t cmd)
{
    set_pin_level(LCD_RS_PORT, LCD_RS_PIN, LOW);
    set_pin_level(LCD_RW_PORT, LCD_RW_PIN, LOW);


    set_port_pins(LCD_DATA_PORT, cmd);
    //en pulse
    set_pin_level(LCD_EN_PORT, LCD_EN_PIN, HIGH);
    _delay_us(500);
    set_pin_level(LCD_EN_PORT, LCD_EN_PIN, LOW);

}

void lcd_print_char(char c)
{
    set_pin_level(LCD_RS_PORT, LCD_RS_PIN, HIGH);
    set_pin_level(LCD_RW_PORT, LCD_RW_PIN, LOW);

    set_port_pins(LCD_DATA_PORT, c);
    //en pulse
    set_pin_level(LCD_EN_PORT, LCD_EN_PIN, HIGH);
    _delay_us(500);
    set_pin_level(LCD_EN_PORT, LCD_EN_PIN, LOW);
}

void lcd_print_str(const uint8_t *str)
{
    set_pin_level(LCD_RS_PORT, LCD_RS_PIN, HIGH);
    set_pin_level(LCD_RW_PORT, LCD_RW_PIN, LOW); 
	int16_t i = 0;
	while (str[i] != '\0')
	{
		lcd_print_char(str[i]);
        _delay_us(500);
		i++;
	}	
}

void lcd_cursor(mode_t mode, mode_t blinkMode)
{   
    uint8_t displayControl = 0b000001100;
    displayControl |= (mode * 2 + blinkMode); //make mode and blinkMode binary number 
    lcd_send_cmd(displayControl);
}

void lcd_shift_display(dir_t direction)
{
    uint8_t msg = 0x18 | (direction<<2);
    lcd_send_cmd(msg);
}


