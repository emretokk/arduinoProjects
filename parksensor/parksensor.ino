#define echoPin  3
#define trigPin  2
#define buzzerPin  8

int maxrange = 50;
int minrange = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int calculated = Distance(maxrange, minrange);
  melody(calculated*10);
  Serial.println("Mesafe : ");
  Serial.println(calculated);

}

int Distance(int maxrange, int minrange){
    long duration, distance;

    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);

    duration = pulseIn
    (echoPin, HIGH);
    distance = duration / 58.2;
    delay(50);

    if(distance >= maxrange || distance <= minrange)
    return 0;
    return distance;
}

int melody(int dly){
    tone(buzzerPin, 400);
    delay(dly);
    noTone(buzzerPin);
    delay(dly);
}
