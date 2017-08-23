boolean boton;


void setup() {
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  boton = digitalRead(8);

  if(boton == 1){
    digitalWrite(9, HIGH);
  }else{
    digitalWrite(9, LOW);
  }
}
