/*
  SimpleLed.h - A Library to interact with LEDs but easier.
  Created by Archontis Kostis, December 2022.
  Will be Lisenced under the MIT License
*/
#ifndef SimpleLed_h
#define SimpleLed_h

#include <Arduino.h>

class SimpleLed {
  private:
  int pin;
  bool isTurnedOn = false;

  public:
    SimpleLed(int pin);

    void init();

    void on();

    void off();

    void blink(int delayTimeInMs, int timesToBlink);

    void blink(int delayTimeInMs);

    void blinkDot();

    void blinkDash();

    void blinkSOS();

    void toggle();

    bool getIsTurnedOn();
};

#endif