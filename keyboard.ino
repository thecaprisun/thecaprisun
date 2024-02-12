 


int pinA = 2;

void setup() {

  pinMode(pinA, INPUT_PULLUP);
}

void loop() {

  if (digitalRead(pinA) == LOW)
  {
    Keyboard.write('A'); W
    delay(500);
  }

}