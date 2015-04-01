/*
*     Лабораторная работа 2
*     "Индикатор датчиков"
*     Автор:
*     Дата создания:
*/

#include <LiquidCrystal.h>
 
LiquidCrystal lcd(4, 5, 10, 11, 12, 13);
 
int i,n;
char c[17];

void setup() 
{
    lcd.begin(16, 2);
    lcd.print("xxUBIVATORxx");
}
 
char symbol = 0;

void loop() 
{
	lcd.clear();
	map(i,0,1023,0,17);
	i=analogRead(14);
	i=i*15/1023;
	for(n=0;n<i;n++)
		{
			lcd.print(" ");
		}
	lcd.print("\xFF");
	lcd.setCursor(0, 1);
	lcd.print(i);
	delay(100);
}