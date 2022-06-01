// C++ code light led by No.6 Papawit Saeliw
//E
int red=2;
int green=4;
int yellow=7;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop()
{
  start();
  first();
  second();
  third();
  delay(3000);
}
//step 1
void start(){
  digitalWrite(red, HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  delay(1000);
}
//step 2
void first(){
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000);
  digitalWrite(green,HIGH);
  delay(2000);
  digitalWrite(green,LOW);
  delay(2000);
  digitalWrite(yellow,HIGH);
  delay(1500);
  digitalWrite(yellow,LOW);
  delay(1500);
}
//step 3
void second(){
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  delay(1000);
  digitalWrite(green,HIGH);
  delay(2000);
  digitalWrite(green,LOW);
  delay(2000);
  digitalWrite(red, HIGH);
  delay(1500);
  digitalWrite(red, LOW);
  delay(1500);
}
//step 4
void third(){
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(green,HIGH);
  delay(500);
  digitalWrite(green,LOW);
  delay(500);
  digitalWrite(green,HIGH);
  delay(500);
  digitalWrite(green,LOW);
  delay(500);
  digitalWrite(yellow,HIGH);
  delay(500);
  digitalWrite(yellow,LOW);
  delay(500);
  digitalWrite(yellow,HIGH);
  delay(500);
  digitalWrite(yellow,LOW);
  delay(500);
}