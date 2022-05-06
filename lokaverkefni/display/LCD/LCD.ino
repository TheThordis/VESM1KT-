/*
 fékk kóðann héðan: https://wiki.keyestudio.com/KS0077(78,79%EF%BC%89Super_Learning_Kit_for_Arduino#Project_20:_1602_LCD
 og breytti textanum.
*/
int DI = 12;
int RW = 11;
int DB[] = {3, 4, 5, 6, 7, 8, 9, 10};// use array to select pin for bus
int Enable = 2;

void LcdCommandWrite(int value) {
// define all pins
int i = 0;
for (i=DB[0]; i <= DI; i++) // assign value for bus
{
   digitalWrite(i,value & 01);// for 1602 LCD, it uses D7-D0( not D0-D7) for signal identification; here, it’s used for signal inversion. 
   value >>= 1;
}
digitalWrite(Enable,LOW);
delayMicroseconds(1);
digitalWrite(Enable,HIGH);
delayMicroseconds(1);  // wait for 1ms
digitalWrite(Enable,LOW);
delayMicroseconds(1);  // wait for 1ms
}

void LcdDataWrite(int value) {
// initialize all pins
int i = 0;
digitalWrite(DI, HIGH);
digitalWrite(RW, LOW);
for (i=DB[0]; i <= DB[7]; i++) {
   digitalWrite(i,value & 01);
   value >>= 1;
}
digitalWrite(Enable,LOW);
delayMicroseconds(1);
digitalWrite(Enable,HIGH);
delayMicroseconds(1);
digitalWrite(Enable,LOW);
delayMicroseconds(1);  // wait for 1ms
}

void setup (void) {
int i = 0;
for (i=Enable; i <= DI; i++) {
   pinMode(i,OUTPUT);
}
delay(100);
// initialize LCD after a brief pause
// for LCD control
LcdCommandWrite(0x38);  // select as 8-bit interface, 2-line display, 5x7 character size 
delay(64);                      
LcdCommandWrite(0x38);  // select as 8-bit interface, 2-line display, 5x7 character size 
delay(50);                      
LcdCommandWrite(0x38);  // select as 8-bit interface, 2-line display, 5x7 character size             
delay(20);                      
LcdCommandWrite(0x06);  // set input mode
                         // auto-increment, no display of shifting
delay(20);                      
LcdCommandWrite(0x0E);  // display setup
                         // turn on the monitor, cursor on, no flickering
delay(20);                      
LcdCommandWrite(0x01);  // clear the scree, cursor position returns to 0
delay(100);                      
LcdCommandWrite(0x80);  //  display setup
                         //  turn on the monitor, cursor on, no flickering

delay(20);                      
}

void loop (void) {
  LcdCommandWrite(0x01);  // clear the scree, cursor position returns to 0  
  delay(10); 
  LcdCommandWrite(0x80+3); 
  delay(10);                     
  // write in welcome message 
  LcdDataWrite('W');
  LcdDataWrite('o');
  LcdDataWrite('w');
  LcdDataWrite(',');
  LcdDataWrite(' ');
  LcdDataWrite('c');
  LcdDataWrite('o');
  LcdDataWrite('o');
  LcdDataWrite('l');
  LcdDataWrite('!');
  delay(10);
  LcdCommandWrite(0xc0+1);  // set cursor position at second line, second position
  delay(1000); 
  LcdDataWrite('e');
  delay(250); 
  LcdDataWrite('r');
  delay(200);
  LcdDataWrite(' ');
  delay(500);
  LcdDataWrite('a');
  delay(100);
  LcdDataWrite('d');
  delay(200);
  LcdDataWrite(' ');
  delay(300);
  LcdDataWrite('s');
  delay(400);
  LcdDataWrite('k');
  delay(300);
  LcdDataWrite('r');
  delay(200);
  LcdDataWrite('i');
  delay(700);
  LcdDataWrite('f');
  delay(400);
  LcdDataWrite('a');
  delay(3000);
  LcdCommandWrite(0x01);  // clear the screen, cursor returns to 0  
  delay(10);
  LcdCommandWrite(0x80+7);
  delay(10);
  LcdDataWrite(':');
  LcdDataWrite(')');
  delay(3000);
  LcdCommandWrite(0x01); // set mode as new characters replay old ones, where there is no new ones remain the same
  delay(10);  
  LcdDataWrite('s');
  LcdDataWrite('k');
  LcdDataWrite('e');
  LcdDataWrite('m');
  LcdDataWrite('m');
  LcdDataWrite('t');
  LcdDataWrite('i');
  LcdDataWrite('l');
  LcdDataWrite('e');
  LcdDataWrite('g');
  LcdDataWrite('t');
  LcdDataWrite('!');
  LcdCommandWrite(0xc0+1);
  delay(250); 
  LcdDataWrite('H');
  delay(250);
  LcdDataWrite('A');
  delay(250);
  LcdDataWrite('H');
  delay(250);
  LcdDataWrite('A');
  delay(250);
  LcdDataWrite('!');
  delay(250);
  LcdDataWrite(' ');
  delay(250);
  LcdDataWrite(' ');
  delay(250);
  LcdDataWrite(' ');
  delay(250);
  LcdDataWrite(' ');
  delay(250);
  LcdDataWrite('X');
  delay(250);
  LcdDataWrite('D');
  delay(5000);
}
//////////////////////////////////////////////////////////
