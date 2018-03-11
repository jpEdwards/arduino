#ifndef Button_h
#define Button_h
#include <Arduino.h>

class Button{
	public:
		Button(char pin, bool activeHigh = true);
		bool isPressed();
		void poll();
		bool changed();
	private:
		char _pin;
		char _state;
		char _lastState;
		bool _activeHigh;
};
#endif
