#include <LiquidCrystal_I2C.h>

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.clear();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("E");
  lcd.setCursor(2,0);
  lcd.print("r");
  lcd.setCursor(3,0);
  lcd.print("i");
  lcd.setCursor(4,0);
  lcd.print("c");
  lcd.setCursor(5,0);
  lcd.print("k");
  //posicionar el cursor para que escriba en otra linea
  lcd.setCursor(0,1);
  lcd.print("C");
  lcd.setCursor(1,1);
  lcd.print("l");
  lcd.setCursor(2,1);
  lcd.print("a");
  lcd.setCursor(3,1);
  lcd.print("i");
  lcd.setCursor(4,1);
  lcd.print("r");
}

void loop() {
  
}
