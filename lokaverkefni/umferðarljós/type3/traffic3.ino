#include "Servo.h"

//servo
Servo servo;
int angle = 0;

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

  // servo
  servo.attach(8);
  servo.write(angle);
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
          angle = 90;
          servo.write(angle);
      delay(500);
      yellow_light();
          angle = 0;
          servo.write(angle);
      delay(500);
      red_light();
          angle = 90;
          servo.write(angle);
      delay(500);
      no_light();
          angle = 180;
          servo.write(angle);
      delay(500);
      all_light();
          angle = 90;
          servo.write(angle);
      delay(500); 
      for(angle = 90; angle > 0; angle--) {
        no_light();
        servo.write(angle);             // <-- aftur í 0 gráður
        delay(15);
        }    
    }

    if(run == 50){
      all_light();
          for(angle = 0; angle < 45; angle++) {
            servo.write(angle);             // <-- aftur í 0 gráður
            delay(15);
          }
          angle = 45;
          servo.write(angle);
      delay(500); 
      red_light();
          angle = 90;
          servo.write(angle);
      delay(500); 
      all_light();
          angle = 135;
          servo.write(angle);
      delay(500);
      yellow_light();
          angle = 180;
          servo.write(angle);
      delay(500);  
      all_light();
          angle = 135;
          servo.write(angle);
      delay(500);
      green_light();
          angle = 90;
          servo.write(angle);
      delay(500);  
      all_light();
          angle = 60;
          servo.write(angle);
      delay(500); 
      for(angle = 60; angle > 0; angle--) {
        servo.write(angle);             // <-- aftur í 0 gráður
        delay(15);
        } 
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
