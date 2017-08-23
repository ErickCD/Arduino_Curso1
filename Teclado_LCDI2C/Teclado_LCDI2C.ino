#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

LiquidCrystal_I2C lcd(0x27,16,2);  //Direccion, tamaño de la pantalla
 
const byte ROWS = 4; 
const byte COLS = 3; 
char keys[ROWS][COLS] = {
{'1','2','3'},
{'4','5','6'},
{'7','8','9'},
{'*','0','#'}
};
byte rowPins[ROWS] = {8, 7, 6, 5}; 
byte colPins[COLS] = {4, 3, 2}; 
 
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
 
void setup(){
  lcd.init();
  lcd.backlight();
  lcd.print("T");lcd.print("e");lcd.print("c");lcd.print("l");lcd.print("a");
  lcd.print(" ");
  lcd.print("a");lcd.print("c");lcd.print("c");lcd.print("c");lcd.print("i");
  lcd.print("o");lcd.print("n");lcd.print("a");lcd.print("d");lcd.print("a");lcd.print(":");
}
 
void loop(){
  char key = keypad.getKey();
  if (key != NO_KEY){
    lcd.setCursor(0,1);
    lcd.print(key);
  }
}
