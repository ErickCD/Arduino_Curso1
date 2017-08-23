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

int contador;
char pass1 = '2';
char pass2 = '4';
char pass3 = '5';
char pass4 = '1';
char tecla1;
char tecla2;
char tecla3;
char tecla4;
 
void setup(){
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  lcd.print("B");lcd.print("i");lcd.print("e");lcd.print("n");lcd.print("v");lcd.print("e");lcd.print("n");lcd.print("i");lcd.print("d");lcd.print("o");
  lcd.setCursor(0,1);
  lcd.print("A");lcd.print("r");lcd.print("d");lcd.print("u");lcd.print("i");lcd.print("n");lcd.print("o");
  delay(2000);
  lcd.clear();
  lcd.print("I");lcd.print("n");lcd.print("t");lcd.print("r");lcd.print("o");lcd.print("d");lcd.print("u");lcd.print("c");lcd.print("i");lcd.print("r");lcd.print(" ");
  lcd.print("P");lcd.print("a");lcd.print("s");lcd.print("s");lcd.print(":");
}
 
void loop()
{
  char key = keypad.getKey();
  if (key != NO_KEY){
    contador = contador + 1;
    if (contador == 1){
      lcd.setCursor(0,1);
      lcd.print(key);
      tecla1 = key;
    }
    if (contador == 2){
      lcd.setCursor(1,1);
      lcd.print(key);
      tecla2 = key;
    }
    if (contador == 3){
      lcd.setCursor(2,1);
      lcd.print(key);
      tecla3 = key;
    }
    if (contador == 4){
      lcd.setCursor(3,1);
      lcd.print(key);
      tecla4 = key;
      contador = 0;
      if (tecla1 == pass1 && tecla2 == pass2 && tecla3 == pass3 && tecla4 == pass4){
        lcd.clear();
        lcd.print("A");lcd.print("c");lcd.print("c");lcd.print("e");lcd.print("s");lcd.print("o");lcd.print(" ");
        lcd.print("c");lcd.print("o");lcd.print("r");lcd.print("r");lcd.print("e");lcd.print("c");lcd.print("t");lcd.print("o");
        digitalWrite(10,HIGH);
        digitalWrite(9,LOW);
        delay(2000);
        lcd.clear();
        lcd.print("I");lcd.print("n");lcd.print("t");lcd.print("r");lcd.print("o");lcd.print("d");lcd.print("u");lcd.print("c");lcd.print("i");lcd.print("r");lcd.print(" ");
        lcd.print("P");lcd.print("a");lcd.print("s");lcd.print("s");lcd.print(":");
      }
      else{
        lcd.clear();
        lcd.print("P");lcd.print("a");lcd.print("s");lcd.print("s");lcd.print(" ");
        lcd.print("i");lcd.print("n");lcd.print("v");lcd.print("a");lcd.print("l");lcd.print("i");lcd.print("d");lcd.print("o");lcd.print("!");
        digitalWrite(9,HIGH);
        digitalWrite(10,LOW);
        lcd.setCursor(0,1);
        lcd.print("I");lcd.print("n");lcd.print("t");lcd.print("e");lcd.print("n");lcd.print("t");lcd.print("e");lcd.print(" ");lcd.print("d");lcd.print("e");lcd.print(" ");
        lcd.print("n");lcd.print("u");lcd.print("e");lcd.print("v");lcd.print("o");lcd.print(":");
        delay(2000);
        lcd.clear();
        lcd.print("I");lcd.print("n");lcd.print("t");lcd.print("r");lcd.print("o");lcd.print("d");lcd.print("u");lcd.print("c");lcd.print("i");lcd.print("r");lcd.print(" ");
        lcd.print("P");lcd.print("a");lcd.print("s");lcd.print("s");lcd.print(":");
      }
    }
  }
}
