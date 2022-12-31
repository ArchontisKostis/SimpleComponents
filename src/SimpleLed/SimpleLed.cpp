/*
  SimpleLed.h - A Library to interact with LEDs but easier.
  Created by Archontis Kostis, December 2022.
  Will be Lisenced under the MIT License
*/
#include "Arduino.h"
#include "SimpleLed.h"

SimpleLed::SimpleLed(int pin) 
{
  this->pin = pin;
}

void SimpleLed::init()
{
  pinMode(pin, OUTPUT);
  off();
}

void SimpleLed::on() 
{
  digitalWrite(pin, HIGH);
  this->isTurnedOn = true;
}

void SimpleLed::off() 
{
  digitalWrite(pin, LOW);
  this->isTurnedOn = false;
}

void SimpleLed::blink(int delayTimeInMs, int timesToBlink) {
  for(int i=0; i<timesToBlink; i++) {
    on();
    delay(delayTimeInMs);
    off();
    delay(delayTimeInMs);
  }
}

void SimpleLed::blink(int delayTimeInMs) {
  on();
  delay(delayTimeInMs);
  off();
  delay(delayTimeInMs);
}

void SimpleLed::blinkDot() 
{
  on();
  delay(250);
  off();
  delay(250);    
}

void SimpleLed::blinkDash() 
{
  on();
  delay(1000);
  off();
  delay(250);
}

void SimpleLed::blinkSOS()
{
  blinkDot(); blinkDot(); blinkDot();
  blinkDash(); blinkDash(); blinkDash();
  blinkDot(); blinkDot(); blinkDot();
}

void SimpleLed::toggle() {
  if(isTurnedOn)
    off();
  else
    on();
}

bool SimpleLed::getIsTurnedOn()
{
  return this->isTurnedOn;
}