# 💡 Turn an LED on/off

This example demonstrates how to use the `SimpleLed` class to blink an LED connected to digital pin 9.

To use this example, you will need to connect an LED to digital pin 9 on your Arduino board. When you run the sketch, the LED will blink on and off at a rate of 1 second per blink.

## 🔧 Hardware Components

- Arduino board
- LED
- 220Ω resistor (optional)

## 🔌 Circuit Diagram

![Put the circuit diagram here](blink-led-circuit.png)

## 💻 Code

```cpp
// Include the SimpleComponents Library
#include <SimpleComponents.h>

// You could also only import SimpleLed
// #include <SimpleLed.h> 

// Create a SimpleLed object
SimpleLed led(9);

void setup() {
  // Initialize the LED
  led.init();
}

void loop() {
  // Turn on the LED
  led.on();
  delay(1000);

  // Turn off the LED
  led.off();
  delay(1000);
}
```

## 🤝 Contribute to Examples

We welcome contributions to the examples in this library! If you find any mistakes or want to add more examples, please don't hesitate to create a pull request.