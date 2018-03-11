/*
 * main.cpp
 *
 *  Created on: Sep 26, 2013
 *      Author: jpEdwards
 *
 *      Setup two momentary-contact buttons
 *      	button1 on pin D2 closes to GND (active low)
 *      	button2 on pin D3 closes to +5V (active high)
 *      Connect two LEDs (don't forget the current limiting resistors)
 *      	pin 0 shows state of button1 (ON=pressed)
 *      	pin 1 shows state of button2 (ON=pressed)
 */

#include "main.h"

Button button1(2, false);
Button button2(3);

Button buttons[] = {
	button1,
	button2
};

void setup()
{
	//Serial.begin(115200);
	//Serial.println("Ready to test.");
}

void loop()
{
	for(unsigned int i=0; i< sizeof buttons / sizeof button1; i++){
		pinMode(i, OUTPUT);
		digitalWrite(i, buttons[i].isPressed() ? HIGH : LOW);
	}
}

int main(void) {

  init();
  setup();

  while(true) {
    loop();
  }
  //Serial.println("Exit");
  return 0;
}
