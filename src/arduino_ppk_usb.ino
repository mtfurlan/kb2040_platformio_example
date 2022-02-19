#include <Keyboard.h>

// pin 11 is reset button
void setup() {
  pinMode(11, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  //if the button is pressed
  if (digitalRead(11) == LOW) {
    //Send an ASCII 'A',
    Keyboard.write(65);
  }
}
