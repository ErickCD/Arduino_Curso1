int pot;
float voltaje;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pot = analogRead(A0);

  voltaje = pot * (5.0 / 1023.0);
  Serial.print("El ADC es: ");
  Serial.print(pot);
  Serial.print(", el voltaje es: ");
  Serial.println(voltaje);
  delay(500);
}
