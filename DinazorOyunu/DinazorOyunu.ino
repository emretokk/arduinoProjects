#include <Servo.h>
int servoPin = 2, servoPos=0;
Servo motor;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  motor.attach(servoPin);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(A5);
  Serial.println(analogValue);

  if (analogValue<300){
    motor.write(165);
    delay(150);
  } else{
    motor.write(120);
    delay(15);      
  }
}
