#include <LiquidCrystal.h>
int rs = 8, e=7, d4=6, d5=5, d6=4, d7=3,trigPin = 12, echoPin=11,sure,uzaklik;
LiquidCrystal lcd(rs,e,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure= pulseIn(echoPin,HIGH,11600);
  uzaklik= sure*0.0345/2;
  delay(250);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Uzaklik:");
  lcd.setCursor(0,1);
  lcd.print(uzaklik);
  lcd.print("cm");
}
