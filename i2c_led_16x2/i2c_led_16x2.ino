#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  lcd.begin(); 
  lcd.print("Hello, world!");
}

void loop()
{
  // Do nothing here...
}
