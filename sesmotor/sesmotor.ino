#define SensorPin 3
#define MotorPin 5
int MotorStatus = LOW;


void setup() {
  // put your setup code here, to run once:
  pinMode(SensorPin, INPUT);
  pinMode(MotorPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(SensorPin)){
    if(MotorStatus == LOW) MotorStatus = HIGH;
    else MotorStatus = LOW;
    digitalWrite(MotorPin, MotorStatus); 
  }
  delay(50);3
}
