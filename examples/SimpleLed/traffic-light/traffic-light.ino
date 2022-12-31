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
