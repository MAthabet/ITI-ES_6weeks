#ifndef LCD_H_
#define LCD_H_

#include <stdint.h>

typedef enum
{
	BIT_4,
	BIT_8,
}data_length_t;

typedef enum
{
	ROW_1,
	ROW_2,
}row_t;

typedef enum
{
	LINE_5x8,
	LINE_5x11,
}line_t;

typedef enum
{
	OFF,
	ON,
} mode_t;

typedef enum
{
	LEFT,
	RIGHT,
} dir_t;
void lcd_init();
void lcd_send_cmd(uint8_t cmd);
void lcd_print_char(char c);
void lcd_print_str(const uint8_t *str);
void lcd_cursor(mode_t mode, mode_t blinkMode);
void lcd_shift_display(dir_t direction);

#endif