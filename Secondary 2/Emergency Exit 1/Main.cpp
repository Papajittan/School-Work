// C++ code emergency exit 1 by No.6 Papawit Saeliw
int buzzer=2;
int redLED=4;
int greenLED=7;
int button=8;
bool alarm=false;
void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  digitalWrite(7,1);
}
void loop()
{
  if(digitalRead(button)==LOW){
    delay(10);
    if(alarm==true){
    alarm=false;
    delay(10);
    }else{
    alarm=true;
      delay(10);
    }
  }
  if(alarm==true){
    digitalWrite(7,0);
    digitalWrite(4,1);
    delay(250);
    tone(buzzer,500,500);
    delay(200);
    digitalWrite(4,0);
    tone(buzzer,300,500);
    delay(200);
    digitalWrite(4,1);
    delay(350);
  }else{
    digitalWrite(7,1);
    digitalWrite(4,0);
    delay(350);
  }
}