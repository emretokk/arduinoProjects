int ENA = 5;
int ENB = 6;
int IN1 = 8;
int IN2 = 9;
int IN3 = 10;
int IN4 = 11;

int hiz = 70;

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

}

void go(){
  analogWrite(ENA, hiz);
  analogWrite(ENB, hiz);
  digitalWrite(IN1, 1);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 1);
  digitalWrite(IN4, 0);
  }

void loop() {
  // put your main code here, to run repeatedly:
  go();
}
