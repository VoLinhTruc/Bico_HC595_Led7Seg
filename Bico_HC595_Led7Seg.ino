#include "Bico_Led7Seg_HC595.h"

Bico_Led7Seg_HC595 led595(COMMON_ANODE, 2, 1000, 0, 6, 7, MSBFIRST, 5);
uint8_t code[8] = {0, 1, 2, 3, 4, 5, 6, 7};
uint8_t digit[8] = {8, 9, 10, 11, 12, 13, 14, 15};

long count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  led595.setup(digit, code);
}

void loop() {
  led595.setNumberAndShow(12345678);
  //delay(1);
}
