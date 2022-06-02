#include <Servo.h>

Servo motor;

int readin;
int degree;

void setup() {
  // put your setup code here, to run once:
  motor.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
  readin = analogRead(A0);
  degree = map(readin, 0, 1023, 0, 180);
  motor.write(degree);
}
