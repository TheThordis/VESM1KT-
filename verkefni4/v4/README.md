# STÝRIPINNI
<br>
### Hvað gerði ég?

### Myndband:


https://user-images.githubusercontent.com/100709468/163690919-26e11498-1489-4da9-a881-42b029bee0b2.mov

<br>

### Kóði:
const int PUSHBUTTON_PIN = 2; <br>
const int PIN11 = 11; <br>
const int PIN10 = 10; <br>
const int PIN9 = 9; <br>
const int PIN8 = 8; <br>

void setup() <br>
{ <br>
Serial.begin(9600); <br>
pinMode(PUSHBUTTON_PIN, INPUT); <br>
digitalWrite(PUSHBUTTON_PIN, HIGH); <br>

pinMode(PIN11,OUTPUT); <br>
pinMode(PIN10,OUTPUT); <br>
pinMode(PIN9,OUTPUT); <br>
pinMode(PIN8,OUTPUT); <br>
} <br>

void loop() { <br>
int xAxis = analogRead(A0); <br>
int yAxis = analogRead(A1); <br>
Serial.print("xAxis: "); <br>
Serial.print(xAxis); <br>
Serial.print("\t"); <br>
Serial.print("yAxis: "); <br>
Serial.println(yAxis); <br>

// XAXIS & YAXIS <br>
if (xAxis < 516) { <br>
  digitalWrite(8, HIGH); <br>
  } <br>
  else {digitalWrite(8, LOW);} <br>

if  (xAxis > 517) { <br>
  digitalWrite(10, HIGH); <br>
  } <br>
  else {digitalWrite(10, LOW);} <br>

if (yAxis < 1012) { <br>
  digitalWrite(9, HIGH); <br>
  } <br>
  else {digitalWrite(9, LOW);} <br>

if (yAxis > 1013) { <br>
  digitalWrite(11, HIGH); <br>
  } <br>
  else {digitalWrite(11, LOW);} <br>

// PUSHBUTTON <br>

if (digitalRead(PUSHBUTTON_PIN) == 1) { <br>
  digitalWrite(11, HIGH); <br>
  digitalWrite(10, HIGH); <br>
  digitalWrite(9, HIGH); <br>
  digitalWrite(8, HIGH); <br>
  } <br>
} <br>
