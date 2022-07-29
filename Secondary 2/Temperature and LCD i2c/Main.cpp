#include <LiquidCrystal_I2C.h>
// C++ code Temperature and LCD I2c by No.6 Papawit Saeliw
#include <Wire.h>
LiquidCrystal_I2C lcd (34,16,2);
int temp=0;
int d=250;
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Temperature Now");
}

void loop()
{
  int val=analogRead(A0);
  temp= map(((val-20)*3.04),0,1023,-40,125);
  lcd.setCursor(0,0);
  lcd.print("Temperature Now");
  lcd.setCursor(0,1);
  lcd.print(temp);
  lcd.print("' Celcius");
  for(int x = 0; x<4; x++){
  if(temp>40){
    mtf();
  }else if(temp >= 25 && temp <= 40){
    bttf();
  }else if(temp<25){
    ltt();
    }
}
  lcd.clear();
  delay(1000);
}

void mtf(){
  digitalWrite(4,1);
  delay(d);
  digitalWrite(4,0);
  tone(2, 769, 420);
  delay(d);
  tone(2, 400, 500);
  delay(d);
}

void bttf(){
    digitalWrite(5,1);
    delay(d);
    digitalWrite(5,0);
    delay(d);
}

void ltt(){
    digitalWrite(6,1);
    delay(d);
    digitalWrite(6,0);
    delay(d);
}