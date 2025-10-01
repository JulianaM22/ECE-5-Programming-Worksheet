/* FIX ME: edit each function below and then call the functions in void loop to test them */

/* CHALLENGE 1 */
void turnLEDOn(CRGB color, int index) {
  // set led to a given color
  FastLED.show();
}
void turnLEDOff(int index) {
  // set led to black
  FastLED.show();
}

void resetStrip() {   // set all leds to black
  for (int i = 0; i < NUM_LEDS; i++) {
    // set led to the black
    // display the color onto the strip
  }
}


/* CHALLENGE 2 */
void moveByOne (CRGB color) {
  // set led at index 0 to a given color
  // wait
  // set led at index 0 to black
  // set led at index 1 to a given color
  // wait
  // set led at index 1 to black
  FastLED.show();
}

void bounceLED(CRGB color) {
  for (int i = 0; i < NUM_LEDS; i++) {
    // set led to the given color
    // display the color onto the strip
    // wait
    // set led back to the color black
  }
  /* Hint: You’ll notice the loop only does half of what the LED is supposed to, can you use another for loop to complete the other half?
    FastLED.show(); */
}


/* CHALLENGE 3 */
void moveTwoByOne (CRGB color) {
  /*Use challenge 2 as a guide. How can you turn on the LEDs at index 0 and at index 1 and then move them to the right one space?*/
  FastLED.show();
}

void bounceTwoLED(CRGB color) {
  /*Use challenge 2 as a guide. How can you get two LEDs (side by side) to both go  from one side to the other together? A for loop is given to get you started.*/
  for (int i = 0; i < NUM_LEDS; i++) {
    // set led to the given color
    // display the color onto the strip
    // wait
    // set led back to the color black
  }
  FastLED.show();
}

//Used for Challenge 4
String receiveMessage() { //reads input from serial monitor
  String message = "";
  if (Serial.available() > 0) {
    while (true) { // loop forever until a newline is seen
      char c = Serial.read();
      if (c != char(-1)) { // if there is a character in the buffer
        if (c == '\n')
          break;
        message += c;
      }
    }
  }
  return message;
}


/* CHALLENGE 4 */
void moveOnCommand(CRGB color) {
  String input = receiveMessage();  //Will take in input from the serial monitor
  //if(   ){  //what condition should be used?
  // Put your code to move the led right here
  //}
  //else if(   ){  //what condition should be used?
  // Put your code to move the led left here
  //}
  FastLED.show();
}


/* CHALLENGE 5 */
// Create your own function!
// You can reference the structure of the functions we created in the previous challenges to help you. Make sure you have fun with it!
