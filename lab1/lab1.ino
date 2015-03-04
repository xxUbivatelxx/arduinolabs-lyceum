/*
*     Лабораторная работа 1
*     "Счетчик нажатий"
*     Автор: XXubivatelXX(Майер Валерий)
*     Дата создания: 04.03.2015
*/

#define PIN_A 2
#define PIN_B 3
#define PIN_C 4
#define PIN_D 5
#define PIN_E 6
#define PIN_F 7
#define PIN_G 8
#define PIN_P 9

int number=0;

byte digit[11] = {
  0b00111111,
  0b00000110,
  0b01011011,
  0b01001111,
  0b01100110,
  0b01101101,
  0b01111101,
  0b00000111,
  0b01111111,
  0b01101111,
  0
};
void setup() {
pinMode(PIN_A,OUTPUT);
pinMode(PIN_B,OUTPUT);
pinMode(PIN_C,OUTPUT);
pinMode(PIN_D,OUTPUT);
pinMode(PIN_E,OUTPUT);
pinMode(PIN_F,OUTPUT);
pinMode(PIN_G,OUTPUT);
pinMode(PIN_P,OUTPUT);
random
}

void loop() {
  showDigit(number);
  delay(1000);
  number++;
  if (number == 10) number=0;
} 
void showDigit(int i){
    digitalWrite (PIN_A, digit[i]&(1<<0));
    digitalWrite (PIN_B, digit[i]&(1<<1));
    digitalWrite (PIN_C, digit[i]&(1<<2));
    digitalWrite (PIN_D, digit[i]&(1<<3));
    digitalWrite (PIN_E, digit[i]&(1<<4));
    digitalWrite (PIN_F, digit[i]&(1<<5));
    digitalWrite (PIN_G, digit[i]&(1<<6));
    digitalWrite (PIN_P, digit[i]&(1<<7));
}
