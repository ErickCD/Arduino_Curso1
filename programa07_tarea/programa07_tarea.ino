int pot;

void setup() {
  Serial.begin(9600);

  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  pot = analogRead(A0);

  //Serial.println(pot);
  //delay(2000);

    if(pot < 200){
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      digitalWrite(2, LOW);
    }else if((pot > 200) && (pot < 400)){
      digitalWrite(5, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      digitalWrite(2, LOW);
    }else if((pot > 400) && (pot < 600)){
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(2, LOW);
    }else if((pot > 600) && (pot < 800)){
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(2, LOW);
    }else if((pot > 800) && (pot < 1024)){
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(2, HIGH);
    }
}
