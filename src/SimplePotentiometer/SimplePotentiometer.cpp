/*
  SimplePotentiometer.cpp - Part of the SimpleCompotents library.
  A Library to interact with LEDs but easier.
  Created by Archontis Kostis, December 2022.
  Will be Lisenced under the MIT License
*/
#include "Arduino.h"
#include "SimplePotentiometer.h"

SimplePotentiometer::SimplePotentiometer(byte pin) 
{
  this->pin = pin;
}

void SimplePotentiometer::update()
{
  this->value = analogRead(pin);
}

int SimplePotentiometer::getValue() 
{
  update();
  return this->value;
}

void SimplePotentiometer::showValue()
{
  Serial.println(getValue());
}