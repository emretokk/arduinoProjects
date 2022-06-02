int echoPin  3;
int trigPin  2;
int ENA = 5;
int ENB = 6;
int IN1 = 8;
int IN2 = 9;
int IN3 = 10;
int IN4 = 11;

int hiz = 70;

int maxrange = 50;
int minrange = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);

}

void go(){
  analogWrite(ENA, hiz);
  analogWrite(ENB, hiz);
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 0);
  }


void right(){
  analogWrite(ENA, hiz);
  analogWrite(ENB, hiz);
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);
  }

int Distance(int maxrange, int minrange){
    long duration, distance;

    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration / 58.2;
    delay(50);

    if(distance >= maxrange || distance <= minrange) return 0;
    return distance;
}

void loop() {
  // put your main code here, to run repeatedly:
  int calculated = Distance(maxrange, minrange);
  if (calculated >= 5) {
    go();
  }
  else{
    right();
  }
  Serial.println("Mesafe : ");
  Serial.println(calculated);
}
