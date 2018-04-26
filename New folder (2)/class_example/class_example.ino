#include "Hieu_Ung_Led.h"

Hieu_Ung_Led hul_1(4, 4, 5, 6, 7);

void setup() {
  // put your setup code here, to run once:
  hul_1.setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  hul_1.nhapNhay();
}
