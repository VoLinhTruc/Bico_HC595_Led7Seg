#include "Bico_Led7Seg_HC595.h"

Bico_Led7Seg_HC595 led595(COMMON_ANODE, 2, 1000, 0, 6, 7, MSBFIRST, 5);

extern uint8_t Bico_seg7_anode_code1[16] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90, 0x88, 0x83, 0xC6, 0xA1, 0x86, 0x8E};

uint8_t code[8] = {0, 1, 2, 3, 4, 5, 6, 7};
uint8_t digit[8] = {8, 9, 10, 11, 12, 13, 14, 15};

long count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  led595.setup(digit, code);
}

void loop() {
  led595.setNumberAndShow(77777777);
  //delay(1);
}
