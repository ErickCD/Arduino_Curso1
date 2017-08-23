int a = 1, b = 15, c;

void setup() {
  Serial.begin(9600);
}

void loop() {
  c = a + b;
  Serial.print("El resultado es: ");
  Serial.println(c);
  delay(1000);
}
