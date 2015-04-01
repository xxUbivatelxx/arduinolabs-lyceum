/*
*     Лабораторная работа 2
*     "Индикатор датчиков"
*     Автор:
*     Дата создания:
*/

#include <LiquidCrystal.h>
 
LiquidCrystal lcd(4, 5, 10, 11, 12, 13);
 
void setup() 
{
    lcd.begin(16, 2);
    lcd.print("Me\xBD\xC7 \xB7oByT");
    lcd.setCursor(0, 1);
    lcd.print("xxUBIVATORxx");
}
 
char symbol = 0;

void loop() 
{

}