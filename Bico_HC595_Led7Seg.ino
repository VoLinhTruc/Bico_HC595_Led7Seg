#include "Bico_Led7Seg_HC595.h"

Bico_Led7Seg led7(COMMON_ANODE, 4, 1000, 0);

uint8_t code[8] = {2, 3, 4, 5, 6, 7, 8, 9};
uint8_t digit[8] = {10, 11, 12, 13};

long count = 0;

void setup() {
  led7.setup(digit, code);
}

void loop() {
  led7.setNumberAndShow(2435);
  //delay(1);
}
