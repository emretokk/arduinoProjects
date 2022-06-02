int trig = 2;
int echo = 3;
int redPin = 5;
int greenPin = 6;


void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(redPin,INPUT);
  pinMode(greenPin,INPUT);
  digitalWrite(trig,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float mesafe = distance_value(trig, echo);
  Serial.println("Mesafe : ");
  Serial.println(mesafe);
  if (mesafe < 1.0){
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
  }
  else{
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
  
}

float distance_value(int trig_pin, int echo_pin){
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig_pin, LOW);
  float temps = pulseIn(echo_pin, HIGH);
  temps = temps/2;
  float distance = (3400*temps) / 1000000;
  delay(50);
  return distance;
}
