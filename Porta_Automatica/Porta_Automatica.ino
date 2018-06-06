//Declaração do buzzer
const int buzzer = 5;

//Declaração dos LED's
const int led_verde = 6;
const int led_vermelho = 3;

//Inclusão Biblioteca RFID
#include <SPI.h>
#include <MFRC522.h>

//Inclusão da Bilioteca do LCD com I2-C
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//Configuração do RFID
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN); //Como no ultrassônico, temos que configurar os pinos do RFID

//Inicializamos o display I2-C
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup(){
  Serial.begin(9600); //Inicia o monitor Serial
  SPI.begin(); //Inicia SPI bus (RFID)
  mfrc522.PCD_Init(); //Inicia o RFID
  lcd.begin (16,2); //Inicializamos o LCD
  Serial.println("Aproxime o seu cartão do leitor.");
  Serial.println();
  
  //Definimos os LED's como saída 
  pinMode(led_verde, OUTPUT);
  pinMode(led_vermelho, OUTPUT);
  mensagem();

  //Inicialização
  inicio();
}

void loop(){
  //Procurando por novos cartões
  if( !mfrc522.PICC_IsNewCardPresent()){
    return;
  }
  //Seleciona um dos cartões
  if( !mfrc522.PICC_ReadCardSerial()){
    return;
  }
  //Mostraremos a UID no Serial apenas por segurança e confirmação
  Serial.print("UID: ");
  String conteudo ="";
  byte letra;
  for (byte i =0; i<mfrc522.uid.size; i++){
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     conteudo.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     conteudo.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  conteudo.toUpperCase();  
  if(conteudo.substring(1) == "22 E0 29 2F"){ //UID 1- Cartão Jani
    Serial.println("Olá Jani, Bem Vindo!");
    digitalWrite(led_verde, HIGH);
    //digitalWrite(led_vermelho, LOW);
    tone (buzzer, 1500);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ola Jani!");
    lcd.setCursor(0,1);
    lcd.print("Seja Bem Vindo!");
    delay(500);
    noTone(buzzer);
    delay(1000);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_vermelho, LOW);
    mensagem();
  }else 
  if(conteudo.substring(1) == "AD FB 42 73"){ //UID 2 -Chaveiro Jani
    Serial.println("Olá Jani, Bem Vindo!");
    digitalWrite(led_verde, HIGH);
    //digitalWrite(led_vermelho, LOW);
    tone (buzzer, 1500);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ola Jani!");
    lcd.setCursor(0,1);
    lcd.print("Seja Bem Vindo!");
    delay(500);
    noTone(buzzer);
    delay(1000);
    digitalWrite(led_verde, LOW);
    mensagem();
 }else 
 if(conteudo.substring(1) == "40 AE CE A4"){ //UID 3 - Cartão equipe
    Serial.println("Olá Matheus, Bem Vindo!");
    digitalWrite(led_verde, HIGH);
    digitalWrite(led_vermelho, LOW);
    tone (buzzer, 1500);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ola Matheus!");
    lcd.setCursor(0,1);
    lcd.print("Seja Bem Vindo!");
    delay(500);
    noTone(buzzer);
    delay(1000);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_vermelho, LOW);
    mensagem();
} else
  if(conteudo.substring(1) == "AA 4C A2 ED"){ //UID 4 - Chaveiro equipe
    Serial.println("Olá, Bem Vindo!");
    digitalWrite(led_verde, HIGH);
    digitalWrite(led_vermelho, LOW);
    tone (buzzer, 1500);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ola!");
    lcd.setCursor(0,1);
    lcd.print("Seja Bem Vindo!");
    delay(500);
    noTone(buzzer);
    delay(1000);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_vermelho, LOW);
    mensagem();
}

  else{ 
    Serial.println("Acesso Negado!");
    digitalWrite(led_vermelho, HIGH);
    digitalWrite(led_verde, LOW);
    tone  (buzzer, 700);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Nao Cadastrado!");
    lcd.setCursor(0,1);
    lcd.print("Acesso Negado!");
    delay(500);
    noTone(buzzer);
    delay(1000);
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_verde, LOW);
    mensagem();
  }
}

void inicio(){
  for(int i =0; i<2; i++){
   tone (buzzer, 2500);
   delay(500);
   noTone(buzzer);
   delay(300);
  }
  tone(buzzer,3000);
  delay(500);
  noTone(buzzer);
  delay(500);
}
void mensagem(){
 //Display
  lcd.setBacklight(HIGH); //Liga a luz de fundo do display(Mesmo sem isso a mensagem aparecerá, mas a "luz" do display estará apagada)
  //Configuração padrão de Display
  lcd.clear();
  lcd.setCursor(0,0); //Linha 0, Coluna 1
  lcd.print("Ola,aproxime");
  lcd.setCursor(0,1); //Linha 0, Coluna 2
  lcd.print("o seu cartao!");
}
