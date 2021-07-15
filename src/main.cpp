#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7) 

void setup() { 
  lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display } 
}
void loop() { 
  lcd.clear(); // Clears the LCD screen 
  lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed 
  lcd.print("Inch/Min:"); 
  lcd.setCursor(5,1); // Sets the location at which subsequent text written to the LCD will be displayed 
  lcd.print("4.25\" -->"); 
  delay(3000);

  // Longer 2nd Row Text 
  lcd.clear(); // Clears the LCD screen  
  lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed 
  String test = "TEST";
  lcd.print("Inch/min:" + test); 
  lcd.setCursor(5,1); // Sets the location at which subsequent text written to the LCD will be displayed 
  lcd.print("<-- 12.75\""); 
  delay(3000);

  // Paused
  lcd.clear(); // Clears the LCD screen 
  lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed 
  lcd.print("---- PAUSED ----"); 
  lcd.setCursor(0,1); // Sets the location at which subsequent text written to the LCD will be displayed 
  lcd.print("---- PAUSED ----"); 
  delay(3000);

  // Rapids
  lcd.clear(); // Clears the LCD screen 
  lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed 
  lcd.print("---- RAPID ----"); 
  lcd.setCursor(0,1); // Sets the location at which subsequent text written to the LCD will be displayed 
  lcd.print("---->  ---->"); 
  delay(3000);
}