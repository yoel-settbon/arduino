const int leds[] = {3, 5, 6, 9, 10, 11};
const int ledCount = 6;

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Montée progressive (fade in)
  for (int brightness = 0; brightness <= 255; brightness += 5) {
    for (int i = 0; i < ledCount; i++) {
      analogWrite(leds[i], brightness);
    }
    delay(30); // contrôle la vitesse du fondu
  }

  delay(500); // pause avec luminosité max

  // Descente progressive (fade out)
  for (int brightness = 255; brightness >= 0; brightness -= 5) {
    for (int i = 0; i < ledCount; i++) {
      analogWrite(leds[i], brightness);
    }
    delay(30);
  }

  delay(500); // pause avant de recommencer
}
