// Dæmi um notkun á 7Segment display
// Byggir á kóða héðan: https://lastminuteengineers.com/seven-segment-arduino-tutorial/

/*Rásin og forritið eiga að virka þannig að þegar ýtt er á 
annan takkann fer teljari í gang sem telur frá 9 og niður í 
0 (talningin á að birtast á birtinum) á ca. 
5 sekúndum. Á meðan talningunni stendur á mótorinn að færast 
í skrefum yfir í 180° stöðuna. Þar stoppar svo mótorinn og 
á birtinum stendur 0. Ekkert meir gerist fyrr en ýtt er á hinn 
takkann. Þá endurstillist bæði mótor og teljari þ.e. mótor 
fer í 0° stöðuna og teljarinn sýnir 9.*/

#include "SevSeg.h"
#include "Servo.h"

SevSeg sevseg;

// fyrir servo
Servo servo;
int angle = 0;

// fyrir takkann (fékk hjálp hérna: https://forum.arduino.cc/t/button-to-start-stop-program/206630)
int run;
int buttonPin;

// reset takki
int resetButtonPin;


// ----------------------------SETUP------------------------------
void setup() {
    // takkinn
    run = 0;
    buttonPin = 5;
    pinMode(buttonPin, INPUT_PULLUP);

    // reset takkinn
    resetButtonPin = 6;
    pinMode(resetButtonPin, INPUT_PULLUP);

    // servo
    servo.attach(4);
    servo.write(angle);
    
    //Set to 1 for single digit display
    byte numDigits = 1;

    //defines common pins while using multi-digit display. Left empty as we have a single digit display
    byte digitPins[] = {};

    //Defines arduino pin connections in order: A, B, C, D, E, F, G, DP
    byte segmentPins[] = {8, 7, 11, 12, 13, 9, 10, 1};
    bool resistorsOnSegments = true;

    //Initialize sevseg object. 
    sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments);

    sevseg.setBrightness(90);
    sevseg.setNumber(9);
}

// --------------------------------LOOP---------------------------
void loop() { 
    sevseg.refreshDisplay();
  
  // takki
  if(digitalRead(buttonPin) == LOW){
    if(run == 0) { 
      run = 255;}
    else {
      run = 0;} 
    }
    if(angle > 0) {
      run = 0;}   // <-- getur ekki talið niður aftur nema ef
                  // mótorinn er í 0° stöðunni
    
    if(run > 0) { 
      for(int i = 9; i > -1; i--) {
        sevseg.setNumber(i);
        angle = angle + 18;   // <-- hér snýst servo mótorinn     
        servo.write(angle);
        sevseg.refreshDisplay();
        delay(500);
      } 
      run = 0;
    }
    
  if(digitalRead(resetButtonPin) == LOW) {
      sevseg.setNumber(9);     // <-- sýnir töluna '9'
      sevseg.refreshDisplay();
      for(angle = 180; angle > 0; angle--) {
        servo.write(angle);             // <-- aftur í 0 gráður
        delay(15);
        }
    }
}
