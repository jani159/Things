  // Primeiramente setamos os 7 pinos
    int A = 12; 
    int B = 11;
    int C = 10;
    int D = 9;
    int E = 8;
    int F = 6;
    int G = 7;
    
    void setup(){
    // seta todos as portas que estão os leds do display como saída
      pinMode(A, OUTPUT); 
      pinMode(B, OUTPUT);
      pinMode(C, OUTPUT);
      pinMode(D, OUTPUT);
      pinMode(E, OUTPUT);
      pinMode(F, OUTPUT);
      pinMode(G, OUTPUT);
    }
    
    void loop(){
      digitalWrite(A, HIGH); //acende os leds que representam o número 0
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, LOW);
      delay(1000); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, LOW); //acende os leds que representam o número 1
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      delay(1000); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 2
      digitalWrite(B, HIGH);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      delay(1000); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 3
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      delay(1000); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, LOW); //acende os leds que representam o número 4
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay(1000); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 5
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay(1000); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, LOW); //acende os leds que representam o número 6
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay(1000); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 7
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      delay(1000); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 8
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay(1000); //aguarda 1 segundo para mostrar próximo número
      digitalWrite(A, HIGH); //acende os leds que representam o número 9
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      delay(1000); //aguarda 1 segundo para mostrar próximo número
    }
