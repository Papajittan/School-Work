// C++ code multiply funcion by No.6 Papawit Saeliw
//E
long int num1;
long int num2;
long int answer;

void setup()
{
  Serial.begin(9600);
  Serial.println("Input a number 1 and 2");
}

void loop()
{
  //First number
  while(Serial.available()==0){}
  num1=Serial.parseInt();
  Serial.print("num1 = ");
  Serial.println(num1);
  //Second number
  while(Serial.available()==0){}
  num2=Serial.parseInt();
  Serial.print("num2 = ");
  Serial.println(num2);
  //Answer the number
  answer=multiply(num1, num2);
  Serial.print("num1 * num2 = ");
  Serial.println(answer);
  Serial.println("-*-*-*-*-*-*-*-*-*-*-*");\
  return;
 }
long int multiply(int x,int y){
  long int result;
  result = x*y;
  return result;
}