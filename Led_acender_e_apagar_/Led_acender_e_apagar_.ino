int led_verde = 7;
int led_amarelo = 5; //Declaramos uma variável led1 para ser nosso LED
int led_vermelho = 3; 

void setup() {
   pinMode(led_verde,OUTPUT); //Fazemos com que essa variável seja do tipo saída
   pinMode(led_amarelo,OUTPUT);
   pinMode(led_vermelho,OUTPUT);
}

void loop() {
  digitalWrite(led_verde,HIGH);
  delay(3000);
  digitalWrite(led_verde,LOW);
  delay(500);
  digitalWrite(led_amarelo,HIGH);
  delay(3000);
  digitalWrite(led_amarelo,LOW);
  delay(500);
  digitalWrite(led_vermelho,HIGH);
  delay(3000);
  digitalWrite(led_vermelho,LOW);
  delay(500);
  
}
