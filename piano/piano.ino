#include "pitches.h"

int DO = NOTE_C5;
int RE = NOTE_D5;
int MI = NOTE_E5;
int FA = NOTE_F5;
int SOL = NOTE_G5;
int LA = NOTE_A5;
int SI = NOTE_B5;

int duree = 200;

int bouton1 = 12;
int bouton2 = 11;
int bouton3 = 10;
int bouton4 = 9;
int bouton5 = 8;
int bouton6 = 7;
int bouton7 = 6;

int buzzer = 2;

void setup() {
  pinMode(bouton1, INPUT_PULLUP);
  pinMode(bouton2, INPUT_PULLUP);
  pinMode(bouton3, INPUT_PULLUP);
  pinMode(bouton4, INPUT_PULLUP);
  pinMode(bouton5, INPUT_PULLUP);
  pinMode(bouton6, INPUT_PULLUP);
  pinMode(bouton7, INPUT_PULLUP);

  pinMode(buzzer, OUTPUT);
}

void loop() {
  if (digitalRead(bouton1) == LOW) {
    tone(buzzer, DO, duree);
  }

  if (digitalRead(bouton2) == LOW) {
    tone(buzzer, RE, duree);
  }

  if (digitalRead(bouton3) == LOW) {
    tone(buzzer, MI, duree);
  }

  if (digitalRead(bouton4) == LOW) {
    tone(buzzer, FA, duree);
  }

  if (digitalRead(bouton5) == LOW) {
    tone(buzzer, SOL, duree);
  }

  if (digitalRead(bouton6) == LOW) {
    tone(buzzer, LA, duree);
  }

  if (digitalRead(bouton7) == LOW) {
    tone(buzzer, SI, duree);
  }
}
