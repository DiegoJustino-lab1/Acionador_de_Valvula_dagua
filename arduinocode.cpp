  // C++ code
  //

  // #define valvula (porta)
  int valor_analogico = 0;

  void setup()
  {
    Serial.begin(9600);
    pinMode(A0, INPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(9, OUTPUT);
  }

  void loop()
  {
    valor_analogico = analogRead(A0);
    if (valor_analogico < 250) {
      digitalWrite(2, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(9, HIGH);
      Serial.print("  POUCA UMIDADE   ");

      }
      if (valor_analogico > 250 && valor_analogico < 600) {
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        //digitalWrite(9, LOW);
        digitalWrite(3, HIGH);
        Serial.print("  MÉDIA UMIDADE   ");
      }
      if (valor_analogico > 600) {
        digitalWrite(4, LOW);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(9, LOW);
        Serial.print("  ALTA UMIDADE   ");
      }
    }
