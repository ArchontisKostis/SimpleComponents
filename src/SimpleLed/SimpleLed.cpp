/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
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