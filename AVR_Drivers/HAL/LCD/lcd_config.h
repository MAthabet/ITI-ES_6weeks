#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_
//USER INPUT:

/// LCD Pins.
/***** LCD Control pins *****/
#define LCD_RS_PORT     DIOD
#define LCD_RS_PIN      P0

#define LCD_RW_PORT     DIOD
#define LCD_RW_PIN      P1

#define LCD_EN_PORT     DIOD
#define LCD_EN_PIN      P2

/******* LCD DATA pins *******/
//user MUST set all data pins on the same port
#define LCD_DATA_PORT   DIOC

//LCD mode
#define LCD_DATA_LENGTH  BIT_8
#define LCD_ROW          ROW_2
#define LCD_LINE        LINE_5x11

#endif