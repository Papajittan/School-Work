#include <LiquidCrystal_I2C.h>
// C++ code Photoresistor by No.6 Papawit Saeliw
#include <Wire.h>
LiquidCrystal_I2C lcd (34,16,2);
int d=250;
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Temperature Now");
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2 ,OUTPUT);
}

void loop()
{
  int ldrRead=analogRead(A0);
  int light_val= map(ldrRead,0,1023,0,1023);
  lcd.setCursor(0,0);
  lcd.print("Light value Now");
  lcd.setCursor(0,1);
  lcd.print(light_val);
  lcd.print(" light");
  for(int x = 0; x<4; x++){
  if(light_val>300){
    ltt();
  }else if(light_val > 70 && light_val <= 300){
    bttf();
  }else if(light_val<=70){
    mtf();
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
  tone(2, 769, 420);
  delay(d);
  tone(2, 400, 500);
  delay(d);
}

void ltt(){
  digitalWrite(6,1);
  delay(d);
  digitalWrite(6,0);
  tone(2, 769, 420);
  delay(d);
  tone(2, 400, 500);
  delay(d);
}