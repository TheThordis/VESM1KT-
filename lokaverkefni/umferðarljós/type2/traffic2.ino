// variables
int GREEN = 2;
int YELLOW = 3;
int RED = 4;
int DELAY_GREEN = 6000;
int DELAY_YELLOW = 2000;
int DELAY_RED = 6000;

int buttonPin;
int extraButtonPin;
int run;

// basic functions
void setup()
{
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);

  run = 0;
  buttonPin = 5;
  extraButtonPin = 6;
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(extraButtonPin, INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(buttonPin) == LOW){
    if(run == 0) { 
      run = 255;}
    else {
      run = 0;} 
    }
  if(digitalRead(extraButtonPin) == LOW){
    if(run == 0) { 
      run = 50;}
    else {
      run = 0;} 
    }
    
    if(run > 0 && run != 50){
      green_light();
      delay(500);
      yellow_light();
      delay(500);
      red_light();
      delay(500);
      no_light();
      delay(500);
      all_light();
      delay(500);      
    }

    if(run == 50){
      all_light();
      delay(500); 
      red_light();
      delay(500); 
      all_light();
      delay(500);
      yellow_light();
      delay(500);  
      all_light();
      delay(500);
      green_light();
      delay(500);  
      all_light();
      delay(500); 
    }
  run = 0;
  no_light();
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

void no_light()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
}

void all_light()
{
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, HIGH);
}
