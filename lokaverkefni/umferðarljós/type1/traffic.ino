// kóði tekinn héðan: https://create.arduino.cc/projecthub/techno_z/arduino-traffic-light-simulator-2ec9f7
// og svo breytti ég honum smá
// variables
int GREEN = 2;
int YELLOW = 3;
int RED = 4;
int DELAY_GREEN = 6000;
int DELAY_YELLOW = 2000;
int DELAY_RED = 6000;


// basic functions
void setup()
{
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{
  green_light();
  delay(DELAY_GREEN);
  yellow_light();
  delay(DELAY_YELLOW);
  red_light();
  delay(DELAY_RED);
  yellow_light(); //bætti við
  delay(DELAY_YELLOW); //bætti við
}

void green_light()
{
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
}

void yellow_light()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, LOW);
}

void red_light()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
}
