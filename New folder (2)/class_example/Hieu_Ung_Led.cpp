#include "Hieu_Ung_Led.h"

Hieu_Ung_Led::Hieu_Ung_Led()
{
  _so_led = SO_LED_THUONG_DUNG;
}

Hieu_Ung_Led::Hieu_Ung_Led(uint8_t so_led)
{
  _so_led = so_led;
}

Hieu_Ung_Led::Hieu_Ung_Led(uint8_t so_led, uint8_t led1, uint8_t led2, uint8_t led3, uint8_t led4)
{
  _so_led = so_led;
  _led1 = led1;
  _led2 = led2;
  _led3 = led3;
  _led4 = led4;
}

void Hieu_Ung_Led::setup()
{
  pinMode(_led1, OUTPUT);
  pinMode(_led2, OUTPUT);
  pinMode(_led3, OUTPUT);
  pinMode(_led4, OUTPUT);
}

void Hieu_Ung_Led::nhapNhay()
{
  digitalWrite(_led1, HIGH);
  digitalWrite(_led2, HIGH);
  digitalWrite(_led3, HIGH);
  digitalWrite(_led4, HIGH);
  delay(100);
  digitalWrite(_led1, LOW);
  digitalWrite(_led2, LOW);
  digitalWrite(_led3, LOW);
  digitalWrite(_led4, LOW);
  delay(100);
}
