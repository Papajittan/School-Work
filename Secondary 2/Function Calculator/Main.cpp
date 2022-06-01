// C++ code function calculator No.06 Papawit Saeliw
int m = 9;
int n = 11;
int add;
int sub;
int mul;
float divi;
void setup()
{
  Serial.begin(9600);
  Serial.print("m = ");
  Serial.println(m);
  Serial.print("n = ");
  Serial.println(n);
  add=addition(m,n);
  Serial.print("m + n = ");
  Serial.println(add);
  sub=subtraction(m,n);
  Serial.print("m - n = ");
  Serial.println(sub);
  mul=multiplication(m,n);
  Serial.print("m * n = ");
  Serial.println(mul);
  divi=division(m,n);
  Serial.print("m / n = ");
  Serial.println(divi);
  
}


int addition(int x, int y){
  int result;
  result = x+y;
  return result;
}
int subtraction(int x, int y){
  int result;
  result = x-y;
  return result;
}
int multiplication(int x, int y){
  int result;
  result = x*y;
  return result;
}
float division(float x, float y){
  float result;
  result = x/y;
  return result;
}