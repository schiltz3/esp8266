
#include "effects.h"

effect ledStrip = effect(100, D8);

void setup() {
  Serial.begin(115200);
  pinMode(D8, OUTPUT);

  pinMode(BUTTON,INPUT_PULLUP);  // internal pull-up resistor
  //attachInterrupt (digitalPinToInterrupt (BUTTON), ledStrip.changeEffect, CHANGE); // pressed
  //reset();

}


void loop() { 
  for(int i = 0; i<= 18; i++){

    Serial.println(i);
      ledStrip.setEffect(15);
      ledStrip.setAll(0,0,0);
 //           ledStrip.setEffect(9);
    }

}

