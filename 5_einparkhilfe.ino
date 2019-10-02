/*
  Projekt 5. Einparkhilfr
  trig=  7
  echo = 6
  VCC = 3,3V
  GND = GND

*/

int trigger=7;
int echo=6;
long dauer=0;
int LED=12;
long entfernung=0;

void setup()
{
Serial.begin (9600);
pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);
pinMode(12, OUTPUT);
}

void loop()
{
digitalWrite(trigger, LOW);
delay(5);
digitalWrite(trigger, HIGH);
delay(10);
digitalWrite(trigger, LOW);
dauer = pulseIn(echo, HIGH);
entfernung = (dauer/2) * 0.03432;


if (entfernung >= 500 || entfernung <= 0)
{
Serial.println("Kein Messwert");
}

else
{
Serial.print(entfernung);
Serial.println(" cm");
}

if (entfernung <= 20
)
{
digitalWrite(LED, HIGH);
delay(entfernung*3);
digitalWrite(LED, LOW);
delay(entfernung*3);
}
}
