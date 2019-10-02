/*
Projekt 2 LED mit Button Input
LED 11
Button 2
*/


const int buttonPin = 2;     
const int ledPin =  11;      


int ButtonStatus = 0;        

void setup() {
 
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  ButtonStatus = digitalRead(buttonPin);

 
  if ( ButtonStatus == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
