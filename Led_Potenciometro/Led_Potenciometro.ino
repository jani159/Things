/*O programa asseguir é capaz de fazer com que 6 LED's sejam
  acesos de acordo com a quantidade de energia que é marcada
  no potenciômetro.
 */

//Declaração de Variáveis
int potValue = 0;
int leds;

void setup() {
    Serial.begin(9600); //Iniciamos o monitor serial para checarmos a medição do potenciômetro
 
  for (leds = 13; leds >= 8; leds--) //Definimos como saída os pinos de 8 a 13
  {
    pinMode(leds, OUTPUT);
  }
}

void loop() {
  potValue = analogRead(0); //Leremos os valores medidos no potenciômetro
  potValue = map(potValue, 0,1023,0,255); //Temos que mudar o intervalo de valores do potenciômetro
  Serial.println(potValue); //Imprimimos os valores medidos já no intervalo de (0,255)

  //Condições de funcionamento dos LED's
  
  if((potValue > 15) && (potValue <= 40)){
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
  }
  else{
    if((potValue >40) && (potValue <= 80)){
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);

    }
    else{
      if((potValue > 80) && (potValue <= 120)){
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);

      }
      else{
        if((potValue > 120) && (potValue <= 160)){
          digitalWrite(8, HIGH);
          digitalWrite(9, HIGH);
          digitalWrite(10, HIGH);
          digitalWrite(11, HIGH);
          digitalWrite(12, LOW);
          digitalWrite(13, LOW);

        }
        else{
          if((potValue > 160) && (potValue <= 200)){
            digitalWrite(8, HIGH);
            digitalWrite(9, HIGH);
            digitalWrite(10, HIGH);
            digitalWrite(11, HIGH);
            digitalWrite(12, HIGH);
            digitalWrite(13, LOW);
          }
          else{
            if((potValue > 200) && (potValue <= 255)){
                digitalWrite(8, HIGH);
                digitalWrite(9, HIGH);
                digitalWrite(10, HIGH);
                digitalWrite(11, HIGH);
                digitalWrite(12, HIGH);
                digitalWrite(13, HIGH);

            }
          }
        }
      }
    }
  }   
}
