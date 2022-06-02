
void setup()
  // put your setup code here, to run once:
  int lights[]={2,3,4,5,6,7};
  for (int i=0; i<6; i++) {
    pinMode(lights[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<6; i++){
    digitalWrite(lights[i], HIGH);
    delay(100);
    digitalWrite(lights[i], LOW);  
    
 }
}
