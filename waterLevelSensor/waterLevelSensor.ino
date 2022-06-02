void setup(){
  Serial.begin(9600);     // Communication started with 9600 baud
  pinMode(2, OUTPUT);
}
void loop(){
  int val=analogRead(A0); // Incoming analog signal read and appointed sensor
  if (val >= 500) {
    tone(2, 1000);
    delay(200);
    noTone(2);
    delay(200);
  } 
  else if (val >= 150) {
    tone(2, 100);
    delay(200);
    noTone(2);
    delay(200);
  }
  Serial.println(val);   //Wrote serial port
}
