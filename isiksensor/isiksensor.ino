#define redpin 9 // RED - 9
#define greenpin 10  // GREEN - 10
#define bluepin 11    // BLUE - 11

void rgbanalogprint(int red, int green, int blue){
  analogWrite(redpin, red);
  analogWrite(greenpin, green);
  analogWrite(bluepin, blue); 
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
}

void loop() {
  // 30+ light area.
  // put your main code here, to run repeatedly:
  int light = analogRead(A0);
  Serial.println(light);
  delay(50);
  
  if (light >= 150) {
    analogWrite(redpin, LOW);
    analogWrite(greenpin, LOW);
    analogWrite(bluepin, LOW);
  }
  else {
    rgbanalogprint(0,0,255);
  }
}
