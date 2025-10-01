#include <FastLED.h>

#define LED_PIN    46 
#define NUM_LEDS   10
#define BRIGHTNESS 100
CRGB leds[NUM_LEDS];

int barCenter = 5;  // Initial center index of bar

void setup() {                
  Serial.begin(9600);
  FastLED.addLeds<WS2811, LED_PIN, GRB>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip); // Initialize the led strip
  FastLED.setBrightness(100); // Set the brightness (0 - 100)
  randomSeed(analogRead(0));  // Use floating analog pin to better randomness
  updateBar();
  delay(1000);
  Serial.println("Welcome to Rock, Paper, Scissors!");
  Serial.println("Enter 1 = Rock, 2 = Paper, 3 = Scissors");
}                                                    

void loop() {
  int p1 = receiveMessage().toInt();
  if (p1 > 0 && p1 < 4) {
    int p2 = random(1, 4);  // random number between 1-3
    printPlays(p1,p2);      // choices in serial monitor

    int result = calculateWin(p1, p2);  // 1: P1 wins, 2: P2 wins, 0: tie

    if (result == 1 && barCenter > 1) {
      barCenter--;  // P1 wins → move left
      Serial.println("Player 1 wins this round!");
    } else if (result == 2 && barCenter < 8) {
      barCenter++;  // P2 wins → move right
      Serial.println("Player 2 wins this round!");
    } else if (result == 0) {
      Serial.println("It's a tie!");
    }

    updateBar();
    checkWin();

    Serial.println("Enter 1 = Rock, 2 = Paper, 3 = Scissors");
  }
}
