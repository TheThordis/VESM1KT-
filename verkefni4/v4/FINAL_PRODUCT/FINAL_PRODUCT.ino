const int PUSHBUTTON_PIN = 2;
const int PIN11 = 11;
const int PIN10 = 10;
const int PIN9 = 9;
const int PIN8 = 8;

void setup() 
{
Serial.begin(9600);
pinMode(PUSHBUTTON_PIN, INPUT); 
digitalWrite(PUSHBUTTON_PIN, HIGH);

pinMode(PIN11,OUTPUT);
pinMode(PIN10,OUTPUT);
pinMode(PIN9,OUTPUT);
pinMode(PIN8,OUTPUT);
}
void loop() {
int xAxis = analogRead(A0);
int yAxis = analogRead(A1);
Serial.print("xAxis: ");
Serial.print(xAxis);
Serial.print("\t");
Serial.print("yAxis: ");
Serial.println(yAxis);

// XAXIS & YAXIS
if (xAxis < 516) {
  digitalWrite(8, HIGH);
  }
  else {digitalWrite(8, LOW);}

if  (xAxis > 517) {
  digitalWrite(10, HIGH);
  }
  else {digitalWrite(10, LOW);}

if (yAxis < 1012) {
  digitalWrite(9, HIGH);
  }
  else {digitalWrite(9, LOW);}

if (yAxis > 1013) {
  digitalWrite(11, HIGH);
  }
  else {digitalWrite(11, LOW);}

// PUSHBUTTON

if (digitalRead(PUSHBUTTON_PIN) == 1) {
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  }
}
