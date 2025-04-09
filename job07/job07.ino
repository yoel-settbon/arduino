const int leds[] = {1,2, 3, 4, 5, 6, 7, 8, 9};  // les 8 broches utilisées
const int ledCount = 8;

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // De gauche à droite
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }

  // De droite à gauche
  for (int i = ledCount - 2; i > 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }
}
