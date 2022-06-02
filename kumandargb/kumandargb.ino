#include <IRremote.h>  //including infrared remote header file     

int RECV_PIN = 3;
int red = 9;
int green = 10;
int blue = 11;

decode_results results;
IRrecv irrecv(RECV_PIN);

#define CH1 0xFFA25D
#define CH 0xFF629D
#define CH2 0xFFE21D
#define PREV 0xFF22DD
#define NEXT  0xFF02FD
#define PLAYPAUSE  0xFFC23D
#define VOL1 0xFFE01F
#define VOL2 0xFFA857
#define EQ 0xFF906F
#define BUTON0  0XFF6897
#define BUTON100 0xFF9867
#define BUTON200 0xFFB04F
#define BUTON1 0xFF30CF
#define BUTON2 0xFF18E7
#define BUTON3 0xFF7A85
#define BUTON4 0xFF10EF
#define BUTON5 0xFF38C7
#define BUTON6 0xFF5AA5
#define BUTON7 0xFF42BD
#define BUTON8 0xFF4AB5
#define BUTON9 0xFF52AD

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(irrecv.decode(&results)){
    if(results.value == BUTON1){
      digitalWrite(red, !digitalRead(red));
      if (digitalRead(red) == HIGH){
        Serial.println("Red light on");
        }
      else{
        Serial.println("Red light off");
        }
      }
    if(results.value == BUTON2){
      digitalWrite(green, !digitalRead(green));
      if (digitalRead(green) == HIGH){
        Serial.println("Green light on");
        }
      else{
        Serial.println("Green light off");
        }
      }
    if(results.value == BUTON3){
      digitalWrite(blue, !digitalRead(blue));
      if (digitalRead(blue) == HIGH){
        Serial.println("Blue light on");
        }
      else{
        Serial.println("Blue light off");
        }
      }
    if(results.value == BUTON4){
      digitalWrite(red, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      Serial.println("All lights on"); 
    }
    if(results.value == BUTON0){
      digitalWrite(red, HIGH);
      digitalWrite(green, HIGH);
      digitalWrite(blue, HIGH);
      Serial.println("All lights off"); 
    }
    irrecv.resume();
}
}
