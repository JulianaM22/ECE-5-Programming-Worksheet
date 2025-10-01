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

/*FIX ME: Add your resetStrip function from Part 1*/

/* FIX ME: fix the updateBar() function following the comments below */
void updateBar() { //updates score bar
  //resetStrip();
  // set led at index barCenter - 1 to your color of choice
  // set led at index barCenter to your color of choice
  // set led at index barCenter + 1 to your color of choice
  FastLED.show();
}

void checkWin() { //check if there's a winner
  if (barCenter == 1) {
    Serial.println("Player 1 wins the game!");
    celebrate(CRGB::Green); 
    resetGame();
  } else if (barCenter == 8) {
    Serial.println("Player 2 wins the game!");
    celebrate(CRGB::Blue);
    resetGame();
  }
}

/* FIX ME: create a celebration LED sequence */
void celebrate(CRGB color) { //celebrate someone winning, game end
  for (int i = 0; i < 3; i++) {
    // create your own blink sequence to celebrate the player's win
  }
}

void resetGame() {
  barCenter = 5;
  updateBar();
}

int calculateWin(int p1, int p2) {
  if (p1 == p2){
    return 0; // tie
  }
  if ((p1 == 1 && p2 == 3) || (p1 == 2 && p2 == 1) || (p1 == 3 && p2 == 2)){ 
    return 1; // p1 win
  }
  return 2; // p2 win
}

void printPlays(int p1, int p2) {
  Serial.print("Player 1 (You) chose: ");
  Serial.println(numberToString(p1));
  Serial.print("Player 2 chose: ");
  Serial.println(numberToString(p2));
}

String numberToString(int num) {
  if (num == 1) return "Rock";
  if (num == 2) return "Paper";
  if (num == 3) return "Scissors";
  return "Unknown";
}
