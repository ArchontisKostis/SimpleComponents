# 💡 SimpleComponents Library Reference
Welcome the SimpleComponents Reference! The reference provides detailed documentation for each class and method in the SimpleComponents library. It is a useful resource for understanding how to use the various components and functions of the library.

## Table of Contents
- [💡 SimpleLed](#-class-simpleled)
- [🔄 SimplePotentiometer](#-class-simplepotentiometer)

## 🏷 Class: SimpleLed

### 🔒 Private Members

- `int pin`: The digital pin number of the Arduino to which the LED is connected.
- `bool isTurnedOn`: A flag to indicate whether the LED is turned on or off.

### 🔓 Public Members

#### `SimpleLed(int pin)`

Constructor for the `SimpleLed` class. It initializes the `pin` member with the given `pin` argument. 
<br><br>
**Example Usage:**

```cpp
SimpleLed led(13); // Creates a SimpleLed object using pin 13.
```
<br>

#### `void init()`

Initializes the pin as an output pin.
<br><br>
**Example Usage:**

```cpp
led.init(); // Initializes pin 13 as an output pin.
```
<br>

#### `void on()`

Turns the LED on by setting the pin to a high level. It also sets the `isTurnedOn` flag to `true`.
<br><br>
**Example Usage:**

```cpp
led.on(); // Turns the LED on.
```
<br>

#### `void off()`

Turns the LED off by setting the pin to a low level. It also sets the `isTurnedOn` flag to `false`.
<br><br>
**Example Usage:**

```cpp
led.off(); // Turns the LED off.
```
<br>

#### `void toggle()`

Toggles the state of the LED, turning it on if it is currently off and vice versa.
<br><br>

**Example Usage:**

```cpp
led.toggle(); // Toggles the state of the LED.
```
<br>

#### `void blink(int delayTimeInMs, int timesToBlink)`

Makes the LED blink `timesToBlink` times, with a delay of `delayTimeInMs` milliseconds between each blink.
<br><br>
**Example Usage:**

```cpp
led.blink(500, 5); // Makes the LED blink 5 times, with a 500ms delay between each blink.
```
<br>

#### `void blink(int delayTimeInMs)`

Makes the LED blink indefinitely, with a delay of `delayTimeInMs` milliseconds between each blink.
> **Note**: this function will only blink the LED once if it is called outside of a loop in the Arduino sketch.

<br>

**Example Usage:**

```cpp
led.blink(500); // Makes the LED blink indefinitely, with a 500ms delay between each blink.
```
<br>

#### `void blinkDot()`

Makes the LED blink once, with a delay of 200 milliseconds between each blink. \
The blink of this function corresponds to the dot in Morse code.

<br>

**Example Usage:**

```cpp
led.blinkDot(); // Makes the LED blink once, with a 200ms delay between each blink.
```
<br>

#### `void blinkDash()`

Makes the LED blink three times, with a delay of 600 milliseconds between each blink. \
The blink of this function corresponds to the dash in Morse code.

<br>

**Example Usage:**

```cpp
led.blinkDash(); // Makes the LED blink three times, with a 600ms delay between each blink.
```
<br>

#### `void blinkSOS()`

Makes the LED blink the SOS pattern (three dots followed by three dashes followed by three dots).
<br><br>
**Example Usage:**

```cpp
led.blinkSOS(); // Makes the LED blink the Morse code signal for "SOS".
```
<br>

#### `bool getIsTurnedOn()`

Returns the value of the `isTurnedOn` flag.
<br>

**Example Usage:**

```cpp
bool isOn = led.getIsTurnedOn(); // Stores the value of the isTurnedOn flag in the isOn variable.
```
<br>

## 🏷 Class: SimplePotentiometer

### 🔒 Private Members

- `byte pin`: The analog pin number of the Arduino to which the potentiometer is connected.
- `int value`: The current value of the potentiometer.

### 🔓 Public Members

#### `SimplePotentiometer(byte pin)`

Constructor for the `SimplePotentiometer` class. It initializes the `pin` member with the given `pin` argument.
<br><br>
**Example Usage:**

```cpp
SimplePotentiometer pot(A0); // Creates a SimplePotentiometer object using pin A0.
```
<br>

#### `void update()`

Updates the value of the `value` member by reading the potentiometer's value from the `pin`.
>**Note**: This function is called inside `getValue()` so you do not need to call it yourself to update the potentiometer value when ever you want to get it.

<br>
**Example Usage:**

```cpp
pot.update();   // Updates the value of the potentiometer.
```
<br>

#### `int getValue()`

Returns the current value of the `value` member.

<br>

**Example Usage:**

```cpp
int potValue = pot.getValue();  // Stores the current value of the potentiometer in the potValue variable. Remember update() is called inside this method.
```
<br>

#### `void showValue()`

Prints the current value of the `value` member to the serial monitor.

<br>

**Example Usage:**

```cpp
pot.showValue();    // Prints the current value of the potentiometer to the serial port.
```
<br>

## 🤝 Contributing

We welcome contributions to the SimpleComponents library! If you have an idea for a new feature or a bug fix, please open an issue or a pull request. We're always looking for ways to make the library better, and we appreciate your help.
