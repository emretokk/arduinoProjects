int lm35pin = A0;
int led = 8;
#define buzzer 9
int Time = 50;
int value = 0;
float temperature_voltage = 0;
float temperature = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(lm35pin);
  temperature_voltage = (value / 1023.0)*5000;
  temperature = temperature_voltage / 10.0;
  Serial.println(temperature);
  if (temperature >= 30){
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);  
    delay(Time);
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);  
    delay(Time);
  }
  else{
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
  }


  
}
