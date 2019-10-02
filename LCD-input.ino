#include <LiquidCrystal.h> 
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); 
int a =9;
int e = 8;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("LCD Counter");
  pinMode(e,INPUT);
}

void loop() {
  int button = digitalRead(e);
  
  
   lcd.setCursor(3, 1);
    lcd.print(a);
  
  
  if (button == HIGH) {
    a ++;
    lcd.setCursor(3, 1);
    lcd.print(a);
     delay(200);
    }
 

    
  
}
