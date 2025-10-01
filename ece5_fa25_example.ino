
// variables
String name = "Brad";

char letter = 'a';

int number = 9; 

float pi = 3.14; 

bool ece5_is_cool = true;

// conditional statements
int x = 6; 

if (x > 5 || x < 4) {  // OR
  //code body here
}

if((x > 0) && (x < 10)){  //AND
  //code body here
}

if (x == 8) {
  // code body here
}else{
  // execute here
}

if() {
  
}else if(){
  
}else{
  
}

// loops
while(true){ //run forver

}

while(x > 5){ //run while condition true
  
}

for(int i=0; i < 5; i++){  //start at 0, increment by 1 each time, run while condition (i < 5) true
  Serial.print(i);
  Serial.print("next");
}
//what would this print?

// arrays
int dogs[3];

String dogs[] = {"lab","poodle","pug"};

//functions
int add_one(int num); //declaration

void setup(){
  Serial.begin(9600);
  Serial.print(add_one(10)); //function call
}

int add_one(int num){ //defintion
  return num++;
}

//function with multiple parameters
int sum_two(int num1, int num2){
  return (num1 + num2);
}

//another function example
int ledPin = 13;

void blinkLED(int pin); //declaration

blinkLED(ledPin); //function call

void blinkLED(int pin) { //definition 
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
}

//libraries
#include <FastLED.h>
