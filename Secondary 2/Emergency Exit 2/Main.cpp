//C++ code emergency exit 2 by no.6 Papawit Saeliw
#include <Servo.h>
Servo why;
int bb1=4;
int bb2=5;
int countA = 0;
int countB = 0;
int buzzer = 2;
int greenLED = 7;
int redLED = 6;
int A = 3;
int B = 2;
void setup() {
  Serial.begin(9600);
  why.attach(3);//pin servo
  pinMode(bb1, INPUT_PULLUP);
  pinMode(bb2, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  digitalWrite(redLED, 1);
  why.write(0); delay(1000);
  checkA();
}
void loop() {}
void checkA(){
  Serial.println("Please enter password A!");
  for(int x = 1; x>0; x++){
  if(digitalRead(bb1)==LOW) {
    delay(300);
    tone(buzzer, 450, 100);
    countA++;Serial.println(countA);delay(100);
  	}
    if(digitalRead(bb2)==LOW) {
      delay(300);
      tone(buzzer, 450, 100);
      checkB();
    }
  }
}
  void checkB(){
    digitalWrite(redLED, LOW);
    Serial.println("Please enter password B!");
    for(int x = 1; x>0; x++){
  if(digitalRead(bb1)==LOW) {
    delay(300);
    tone(buzzer, 450, 100);
    countB++;Serial.println(countB);delay(100);
  }
    if(digitalRead(bb2)==LOW) {
      delay(300);tone(buzzer, 450, 100); checkpassword();
    }
  }
  }
  void checkpassword(){
    if(countA==A && countB==B){
      delay(15);
      for(int x=1; x<20; x++){
        why.write(180);
        digitalWrite(greenLED , 1);
        tone(buzzer, 450, 100);
        delay(100);
        digitalWrite(greenLED , 0);
        tone(buzzer, 350, 100);
        delay(100);
      }
    }else{
      for(int x=1; x<6; x++){
    	digitalWrite(redLED, 1);
        delay(100);
        digitalWrite(redLED, 0);
        delay(100);
      }
    }
    why.write(0); delay(1000);
    countA = 0; countB = 0;
	setup();
  }