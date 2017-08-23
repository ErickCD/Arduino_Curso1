int pot;
float voltaje;
float temperatura;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pot = analogRead(A1);

  voltaje = pot * (5.0 / 1023.0);

  temperatura = voltaje * 100.0;
  Serial.print("La temperatura es: ");
  Serial.println(temperatura);
  delay(500);
}
