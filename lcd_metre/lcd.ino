#include <LiquidCrystal.h>
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

// PINS
// VSS to GND
// VDD to 5V
// V0 to potanmetre output
// RS to 12
// RW to GND
// E to 11
// D4 to 5
// D5 to 4
// D6 to 3
// D7 to 2
// A to 5V with 220ohm resistor
// K to GND

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("GTA GELMEYEN");
  lcd.setCursor(0, 1);
  lcd.print("SENKALLARI TTEN");
}
