# STÝRIPINNI


### Hvað gerði ég?

Ég gerði æfingarverkefnið og skoðaði svo [þetta](https://www.youtube.com/watch?v=WXzBMkdR3yk&t=62s) YouTube myndband. Í lýsingunni undir myndbandinnu var hlekkur að [þessum](https://github.com/viratbadri/Electro-oxe/blob/master/codes/my_joystcode.ino) kóða, sem ég blandaði hálfpartinn við kóðann úr [æfingarverkefninu](https://create.arduino.cc/projecthub/Raushancpr/control-rgb-led-with-joystick-68f601). <br>
Gagnstæðum ljósum er stjórnað af sama ásinum, ↑ og ↓ af x-ásnum en ← og → af y-ásnum. Ef ýtt er niður í miðjuna kviknar á öllum fjórum.


### Myndband:


https://user-images.githubusercontent.com/100709468/163690919-26e11498-1489-4da9-a881-42b029bee0b2.mov

### Fleiri myndir:
![1](https://user-images.githubusercontent.com/100709468/163692251-6a1f8497-ec58-451e-af25-2ed5a96345db.jpg)
![2](https://user-images.githubusercontent.com/100709468/163692253-cd0a24a0-3e10-4ccb-9c8d-9dc5fb3c67c5.jpg)
![3](https://user-images.githubusercontent.com/100709468/163692254-ff49a1e5-d732-4285-b16a-ed881ca84a9d.jpg)
![4](https://user-images.githubusercontent.com/100709468/163692255-a606d9fa-f468-439a-8870-e3b3849cc1eb.jpg)
![5](https://user-images.githubusercontent.com/100709468/163692256-33c01e33-6033-47f0-89ef-9f82b4ef7f55.jpg)


### Kóðinn:
#### .ino skjalið með kóðanum er undir [v4 --> FINAL_PRODUCT] 
&nbsp;

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

### Athugasemdir frá nemanda 


Gildin á joystick-inu mínu eru eftirfarandi: <br>
*X-gildi --> **0** til **1023*** <br>
*Y-gildi --> **1000** til **1023*** <br>
Ég veit ekki hvers vegna y-gildin eru þessi, en þrátt fyrir hversu grunsamleg þau eru var auðvelt að vinna með þau í þessu verkefni. 

