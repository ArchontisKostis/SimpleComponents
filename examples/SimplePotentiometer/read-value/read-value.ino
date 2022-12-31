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