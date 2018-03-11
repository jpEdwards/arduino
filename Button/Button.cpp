#include "Button.h"

Button::Button(char pin, bool activeHigh){
	_pin = pin;
	_activeHigh = activeHigh;
	poll();
}

bool Button::isPressed(){
	poll();
	return _activeHigh ? _state==HIGH : _state==LOW;
}

void Button::poll(){
	pinMode(_pin, INPUT);
	char p = digitalRead(_pin);
	_lastState = _state;
	_state = p;
}

bool Button::changed(){
	poll();
	return _lastState != _state;
}

