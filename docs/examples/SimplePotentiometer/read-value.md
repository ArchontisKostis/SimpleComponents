## 📊 Reading a Potentiometer

This example demonstrates how to use the `SimplePotentiometer` class to read the value of a potentiometer. The value is printed to the serial monitor.

To use this example, you will need to connect a potentiometer to analog pin A0 on your Arduino board.

## 🔧 Hardware Components

- Arduino board
- Potentiometer

## 🔌 Circuit Diagram

![Circuit diagram for the Reading a Potentiometer example](reading-a-potentiometer-circuit.png)

## 💻 Code

```cpp
#include <SimpleComponents.h>      // Include the SimpleComponents Library

SimplePotentiometer pot(A0);      // Create a SimplePotentiometer object for analog pin A0

void setup() {
  Serial.begin(9600);             // Initialize the serial monitor
}

void loop() {
  pot.update();                   // Update the value of the potentiometer
  int value = pot.getValue();     // Read the value of the potentiometer
  Serial.println(value);          // Print the value to the serial monitor
  delay(500);                     // Wait 500 milliseconds
}
```

## 🤝 Contribute to Examples

We welcome contributions to the examples in this library! If you find any mistakes or want to add more examples, please don't hesitate to create a pull request.