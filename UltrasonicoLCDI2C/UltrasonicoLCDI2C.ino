#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  //Direccion, tamaño de la pantalla



long duracion; 
float distancia;
 
void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(9,OUTPUT);
  pinMode(8,INPUT);
  delay(50);
  lcd.print("D");
  lcd.print("i");
  lcd.print("s");
  lcd.print("t");
  lcd.print("a");
  lcd.print("n");
  lcd.print("c");
  lcd.print("i");
  lcd.print("a");
  lcd.print(":");
}
 
void loop() {
  digitalWrite(9, LOW);  //generacion de pulso
  delayMicroseconds(4);
  digitalWrite(9, HIGH);  
  delayMicroseconds(10);
  digitalWrite(9, LOW);
  duracion = pulseIn(8, HIGH);  //medimos el tiempo entre pulsos, en microsegundos
  distancia = duracion * 10.0 / 292.0/ 2.0;   //convertimos a distancia, en cm
  lcd.setCursor(0,1);
  lcd.print(distancia);
  lcd.setCursor(7,1);
  lcd.print("c");
  lcd.println("m");
  delay(500);
  //lcd.setCursor(0,1);
  //lcd.print("");
}
