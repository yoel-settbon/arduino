const int ledPin1 = 0; // Broche pour la première LED verte
const int ledPin2 = 1; // Broche pour la deuxième LED rouge
 
// Temps de clignotement
const int blinkTime = 2000; // Temps en millisecondes
 
void setup() {
  pinMode(ledPin1, OUTPUT); // Définit la broche de la LED verte en sortie
  pinMode(ledPin2, OUTPUT); // Définit la broche de la LED rouge en sortie
}
 
void loop() {
  digitalWrite(ledPin1, HIGH); // Allume la LED verte
  digitalWrite(ledPin2, LOW);  // Éteint la LED rouge
  delay(blinkTime);            // Attend
 
  digitalWrite(ledPin1, LOW);  // Éteint la LED verte
  digitalWrite(ledPin2, HIGH); // Allume la LED rouge
  delay(blinkTime);            // Attend
}