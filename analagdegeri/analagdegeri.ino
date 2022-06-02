void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Deger : ");
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger=0;
  deger = analogRead(A0);
  // deger = map(deger, 0, 1023, 0, 255);
  deger/=4;
  Serial.println(deger);
  analogWrite(9, deger);
  delay(500);
}
