// Pins definieren
const int greenPin = 12;
const int redPin = 13;
const int soundPin = 7;
 
// Aktueller Status, boolean kann nur false/0 oder true/1 sein
// d.h. "not 0" = 1 und "not 1" = 0
// statt "not" kann man auch "!" schreiben
boolean greenLedStatus = false;
 
// Wie lange warten nach Ton?
const int pauseDelay = 20;
 
void setup() {
  // Pins konfigurieren und LEDs auf Start setzen
  Serial.begin(9600);
  pinMode(soundPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  digitalWrite(greenPin, greenLedStatus);
  digitalWrite(redPin, !greenLedStatus);
}
 
void loop() {
  // Digitalpin 7 auslesen und bei LOW umschalten
  int din = digitalRead(soundPin);
  if (!din) {
    greenLedStatus = !greenLedStatus;
    digitalWrite(greenPin, greenLedStatus);
    digitalWrite(redPin, !greenLedStatus);
    // Das HIGH ist nicht ganz logisch, da am Pin ja eigentlich ein LOW anliegt :)
    Serial.println("HIGH!");
    delay(pauseDelay);
  }
}
