# 🚦 Traffic Light

This example demonstrates how to use the `SimpleLed` class to create a traffic light with three LEDs. The traffic light sequence is:

- Red for 5 seconds
- Yellow for 1 second
- Green for 5 seconds

To use this example, you will need to connect three LEDs to digital pins 9, 10, and 11 on your Arduino board. You may also want to use 220Ω resistors to limit the current going through the LEDs.

## 🔧 Hardware Components

- Arduino board
- 3x LEDs
- 3x 220Ω resistors (optional)

## 🔌 Circuit Diagram

![Circuit diagram for the Traffic Light example](traffic-light-circuit.png)

## 💻 Code

```cpp
// Include the SimpleComponents Library
#include <SimpleComponents.h>    

// You could also only import SimpleLed
// #include <SimpleLed.h> 

// Create three SimpleLed objects for the traffic light
SimpleLed red(9);
SimpleLed yellow(10);
SimpleLed green(11);

void setup() {
  // Initialize the LEDs
  red.init();
  yellow.init();
  green.init();
}

void loop() {
  // Turn on the red LED
  red.on();
  delay(5000);

  // Turn on the yellow LED
  yellow.on();
  delay(1000);
  yellow.off();

  // Turn on the green LED
  green.on();
  delay(5000);

  // Turn off all the LEDs
  red.off();
  green.off();
  yellow.off();
}
```

## 🤝 Contribute to Examples

We welcome contributions to the examples in this library! If you find any mistakes or want to add more examples, please don't hesitate to create a pull request.
