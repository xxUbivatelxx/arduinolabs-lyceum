#include <OneWire.h>
/*
*     Лабораторная работа 2
*     "Индикатор датчиков"
*     Автор:
*     Дата создания:
*/

#include <LiquidCrystal.h>
 
LiquidCrystal lcd(4, 5, 10, 11, 12, 13);
OneWire  ds(9);
 
int v,n;
char c[17];

void setup() 

{
    lcd.begin(16, 2);
    lcd.print("xxUBIVATORxx");
}
 
char symbol = 0;

void loop() 
{
	byte i;
  byte present = 0;
  byte type_s;
  byte data[12];
  byte addr[8];
  float celsius, fahrenheit;
  
  if ( !ds.search(addr)) {
    ds.reset_search();
    return;
  }
  if (OneWire::crc8(addr, 7) != addr[7]) {
      Serial.println("CRC is not valid!");
      return;
  } 

  ds.reset();
  ds.select(addr);
  ds.write(0x44, 1);        // start conversion, with parasite power on at the end
  
  present = ds.reset();
  ds.select(addr);    
  ds.write(0xBE);         // Read Scratchpad
  for ( i = 0; i < 9; i++) {           // we need 9 bytes
    data[i] = ds.read();
    Serial.print(data[i], HEX);
    Serial.print(" ");
  }
  int16_t raw = (data[1] << 8) | data[0];
  if (type_s) {
    raw = raw << 3; // 9 bit resolution default
    if (data[7] == 0x10) {
      raw = (raw & 0xFFF0) + 12 - data[6];
    }
  } else {
    byte cfg = (data[4] & 0x60);
    if (cfg == 0x00) raw = raw & ~7;
    else if (cfg == 0x20) raw = raw & ~3;
    else if (cfg == 0x40) raw = raw & ~1;
  }
  celsius = (float)raw / 16.0;
  Serial.print("  Temperature = ");
  Serial.print(celsius);
  Serial.print(" Celsius, ");
  Serial.println("");


    /*lcd.begin(16, 2);
    lcd.print("xxUBIVATORxx");*/

  lcd.clear();
  lcd.home();
 lcd.print("T=");
  lcd.print(celsius);


	lcd.setCursor(0, 1);
	map(i,0,1023,0,17);
	v=analogRead(14);
	v=v*15/1023;
	for(n=0;n<v;n++)
		{
			lcd.print(" ");
		}
	lcd.print("\xFF");

}