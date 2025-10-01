// This is a comment, everything after the // gets ignored by the ESP32
// Assign the pin your LED strip is wired to the constant integer variable LED_PIN

#include <FastLED.h>

#define LED_PIN    46 //#define does the same thing as const for integers
#define NUM_LEDS   10
#define BRIGHTNESS 100
CRGB leds[NUM_LEDS];

// setup() function runs once when the ESP32 turns on or is reset
void setup() {                
  /* FIX ME: Put the correct code to enable the Serial monitor here */
  FastLED.addLeds<WS2811, LED_PIN, GRB>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip ); // Initialize the led strip
  FastLED.setBrightness(100); // set the brightness (0 - 100)
}                                                    

/* loop() function runs the code inside repeatedly while ESP32 is still on */
void loop() {
  //blink led
  //turnLEDOn(CRGB::Blue, 0);
  //delay(500);
  //turnLEDOff(0);

  //resetStrip();

  //moveByOne(CRGB::Blue);

  //resetStrip();


  //bounceLED(CRGB::Blue);
  
  //resetStrip();

  //moveTwoByOne(CRGB::Blue);

  //resetStrip();

  //bounceTwoLED(CRGB::Blue);

  //resetStrip();

  //moveOnCommand(CRGB::Blue, 0, 1);

  //resetStrip();

  //bounceTwoLEDToEnd(CRGB::Blue);
}
