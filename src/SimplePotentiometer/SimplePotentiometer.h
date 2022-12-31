/*
  SimplePotentiometer.h - Part of the SimpleCompotents library.
  A Library to interact with LEDs but easier.
  Created by Archontis Kostis, December 2022.
  Will be Lisenced under the MIT License
*/
#ifndef SimplePotentiometer_h
#define SimplePotentiometer_h

#include <Arduino.h>

class SimplePotentiometer {
  private:
    byte pin;
    int value;

  public:
    SimplePotentiometer(byte pin);

    void update();

    int getValue();

    void showValue();
};

#endif