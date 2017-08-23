int R = 0;
int G = 0;
int B = 254;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  analogWrite(9,R);
  analogWrite(10,G);
  analogWrite(11,B);
}
