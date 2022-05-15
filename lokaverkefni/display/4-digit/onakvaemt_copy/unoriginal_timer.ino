/*
 Upprunalegi kóðinn kemur héðan: https://wiki.keyestudio.com/KS0077(78,79%EF%BC%89Super_Learning_Kit_for_Arduino#Project_18:_4-digit_LED_Segment_Display
 Ég breytti bara void loopinu.
*/
// display 1234 
  // select pin for cathode
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 4;
  int e = 5;
  int f = 6;
  int g = 7;
  int dp = 8;
  // select pin for anode
  int d4 = 9;
  int d3 = 10;
  int d2 = 11;
  int d1 = 12;
  // set variable
  long n = 1230;
  int x = 100;
  int del = 55;  // fine adjustment for clock

  int timi  = 0; // bætti þessari breytu
  
  void setup()
  {
    pinMode(d1, OUTPUT);
    pinMode(d2, OUTPUT);
    pinMode(d3, OUTPUT);
    pinMode(d4, OUTPUT);
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(dp, OUTPUT);
  }
//////////////////////////////////////////////////////////////// ÉG BREYTTI BARA ÞESSUM HLUTA KÓÐANS
void loop()
{
  timi = timi + 1;
 if (timi < 500){
 Display(1, 0);
 Display(2, 0);
 Display(3, 0);
 }
 if (timi > 500 and timi < 1000){
 Display(1, 1);
 Display(2, 0);
 Display(3, 0);  
  }
 if (timi > 1000 and timi < 1500){
 Display(1, 2);
 Display(2, 0);
 Display(3, 0);
 }
 if (timi > 1500 and timi < 2000){
 Display(1, 3);
 Display(2, 0);
 Display(3, 0);
 }
  if (timi > 2000 and timi < 2500){
 Display(1, 4);
 Display(2, 0);
 Display(3, 0);
 }
  if (timi > 2500 and timi < 3000){
 Display(1, 5);
 Display(2, 0);
 Display(3, 0);
 }
  if (timi > 3000 and timi < 3500){
 Display(1, 6);
 Display(2, 0);
 Display(3, 0);
 }
  if (timi > 3500 and timi < 4000){
 Display(1, 7);
 Display(2, 0);
 Display(3, 0);
 }
  if (timi > 4000 and timi < 4500){
 Display(1, 8);
 Display(2, 0);
 Display(3, 0);
 }
  if (timi > 4500 and timi < 5000){
 Display(1, 9);
 Display(2, 0);
 Display(3, 0);
 }
  if (timi > 5000 and timi < 5500){
 Display(1, 0);
 Display(2, 1);
 Display(3, 0);
 }
  if (timi > 5500){
 Display(1, 4);
 Display(2, 0);
 Display(3, 4);
 }
}
///////////////////////////////////////////////////////////////
void WeiXuan(unsigned char n)//
{
    switch(n)
     {
  case 1: 
    digitalWrite(d1,LOW);
    digitalWrite(d2, HIGH);
    digitalWrite(d3, HIGH);
    digitalWrite(d4, HIGH);   
   break;
   case 2: 
    digitalWrite(d1, HIGH);
    digitalWrite(d2, LOW);
    digitalWrite(d3, HIGH);
    digitalWrite(d4, HIGH); 
      break;
    case 3: 
      digitalWrite(d1,HIGH);
     digitalWrite(d2, HIGH);
     digitalWrite(d3, LOW);
     digitalWrite(d4, HIGH); 
      break;
    case 4: 
     digitalWrite(d1, HIGH);
     digitalWrite(d2, HIGH);
     digitalWrite(d3, HIGH);
     digitalWrite(d4, LOW); 
      break;
        default :
           digitalWrite(d1, HIGH);
     digitalWrite(d2, HIGH);
     digitalWrite(d3, HIGH);
     digitalWrite(d4, HIGH);
        break;
    }
}
void Num_0()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(dp,LOW);
}
void Num_1()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp,LOW);
}
void Num_2()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp,LOW);
}
void Num_3()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(dp,LOW);
}
void Num_4()
{
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp,LOW);
}
void Num_5()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp,LOW);
}
void Num_6()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp,LOW);
}
void Num_7()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp,LOW);
}
void Num_8()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp,LOW);
}
void Num_9()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp,LOW);
}
void Clear()  // clear the screen
{
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp,LOW);
}
void pickNumber(unsigned char n)// select number
{
  switch(n)
  {
   case 0:Num_0();
   break;
   case 1:Num_1();
   break;
   case 2:Num_2();
   break;
   case 3:Num_3();
   break;
   case 4:Num_4();
   break;
   case 5:Num_5();
   break;
   case 6:Num_6();
   break;
   case 7:Num_7();
   break;
   case 8:Num_8();
   break;
   case 9:Num_9();
   break;
   default:Clear();
   break; 
  }
}
void Display(unsigned char x, unsigned char Number)//  take x as coordinate and display number
{
  WeiXuan(x);
  pickNumber(Number);
 delay(1);
 Clear() ; // clear the screen
}
//////////////////////////////////////////////////////////
