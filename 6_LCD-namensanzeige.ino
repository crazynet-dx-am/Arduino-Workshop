// Bitte bei "DEIN NAME" deinen Namen eintragen!

#include <LiquidCrystal.h> 
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); 

void setup() { 
 lcd.begin(16,2); 
}


void loop() { 
 lcd.clear(); 
 delay(2000);
 lcd.print("Hallo,"); 
 delay(3000); 
 lcd.setCursor(2,1); 
 lcd.print("DEIN NAME)"); 
 delay(3000); 
 lcd.clear(); 
}
