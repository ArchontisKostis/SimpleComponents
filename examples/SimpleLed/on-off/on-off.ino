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

