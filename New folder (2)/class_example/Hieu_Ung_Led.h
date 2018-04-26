#ifndef HIEU_UNG_LED_H_
#define HIEU_UNG_LED_H_

#include <Arduino.h>

#define SO_LED_THUONG_DUNG 8

class Hieu_Ung_Led
{
  public:
    Hieu_Ung_Led();
    Hieu_Ung_Led(uint8_t so_led);
    Hieu_Ung_Led(uint8_t so_led, uint8_t led1, uint8_t led2, uint8_t led3, uint8_t led4);
    
    void setup();
    void nhapNhay();
    
    uint8_t _so_led;
    uint8_t _led1;
    uint8_t _led2;
    uint8_t _led3;
    uint8_t _led4;
};



#endif
