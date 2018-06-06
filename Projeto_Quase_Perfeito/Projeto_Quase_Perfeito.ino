//Declaração do buzzer
const int buzzer = 5;

//Declaração do botão 
const int botao = 4;
int estado_botao = 0;

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
  lcd.begin (16,2); //Ligamos o LCD
  Serial.println("Aproxime o seu cartão do leitor.");
  Serial.println();
  
  //Definimos os LED's como saída 
  pinMode(led_verde, OUTPUT);
  pinMode(led_vermelho, OUTPUT);

  //Definimos o botão como entrada
  pinMode(botao, INPUT);
  //Inicialização
  mensagem_identificacao();
  inicio();
  
}

void loop(){
  //Verificação dos botões
  estado_botao = digitalRead(botao);
  //Procurando por novos cartões
  if( !mfrc522.PICC_IsNewCardPresent()){
    return;
  }
  //Seleciona um dos cartões
  if( !mfrc522.PICC_ReadCardSerial()){
    return;
  }
  //Mostraremos a UID no Serial apenas por segurança e confirmação
  Serial.print("UID:");
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
  if(conteudo.substring(1) == "22 E0 29 2F"){ //UID 1- Cartão Janiel
    Serial.println("Aluno: Janiel Levi");
    Serial.println("Matrícula: 1810979/4");
    Serial.println("Curso: Engenharia de Controle e Automação");
    digitalWrite(led_verde, HIGH);
    tone (buzzer, 1500);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ola Janiel!");
    lcd.setCursor(0,1);
    lcd.print("Espere...");
    delay(700);
    digitalWrite(led_verde,LOW);
    noTone(buzzer);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Aproxime a");
    lcd.setCursor(0,1);
    lcd.print("Ferramenta");
    if(conteudo.substring(1) == "AD FB 42 73"){ //Chaveiro Ferramenta-A
      Serial.println("Ferramenta: A");
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Deseja alugar");
      lcd.setCursor(0,1);
      lcd.print("a ferramenta?");
      if(estado_botao){
        Serial.println("Ferramenta A, foi alugada por Janiel Levi, Matrícula 1810979/4");
        Serial.println("Curso: Engenharia de Controle e Automação");
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Ferramenta aluga");
        lcd.setCursor(0,1);
        lcd.print("da com sucesso!");
      }
    }else{
      if(conteudo.substring(1) == "AA 4C A2 ED"){ //Chaveiro Ferramenta-B
      Serial.println("Ferramenta: B");
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Deseja alugar");
      lcd.setCursor(0,1);
      lcd.print("a ferramenta?");
      if(estado_botao){
        Serial.println("Ferramenta B, foi alugada por Janiel Levi, Matrícula 1810979/4");
        Serial.println("Curso: Engenharia de Controle e Automação");
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Ferramenta aluga");
        lcd.setCursor(0,1);
        lcd.print("da com sucesso!");
        
      }
    }
    }
      mensagem_identificacao();
    }else 
 if(conteudo.substring(1) == "40 AE CE A4"){ //UID 3 - Cartão Kepler
    Serial.println("Aluno: Victor Kepler");
    Serial.println("Matrícula: 1810955/4");
    Serial.println("Curso: Engenharia de Controle e Automação");
    digitalWrite(led_verde, HIGH);
    tone (buzzer, 1500);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Ola Victor!");
    lcd.setCursor(0,1);
    lcd.print("Espere...");
    delay(1000);
    digitalWrite(led_verde,LOW);
    noTone(buzzer);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Aproxime a");
    lcd.setCursor(0,1);
    lcd.print("Ferramenta");

    if(conteudo.substring(1) == "AD FB 42 73"){ //Chaveiro Ferramenta-A
      Serial.println("Ferramenta: A");
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Deseja alugar");
      lcd.setCursor(0,1);
      lcd.print("a ferramenta?");
      if(estado_botao){
        Serial.println("Ferramenta A, foi alugada por Victor Kepler, Matrícula 1810955/7");
        Serial.println("Curso: Engenharia de Controle e Automação");
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Ferramenta aluga");
        lcd.setCursor(0,1);
        lcd.print("da com sucesso!");
      }
    }else{
      if(conteudo.substring(1) == "AA 4C A2 ED"){ //Chaveiro Ferramenta-B
      Serial.println("Ferramenta: B");
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Deseja alugar");
      lcd.setCursor(0,1);
      lcd.print("a ferramenta?");
      if(estado_botao){
        Serial.println("Ferramenta B, foi alugada por Victor Kepler, Matrícula 1810955/7");
        Serial.println("Curso: Engenharia de Controle e Automação");
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Ferramenta aluga");
        lcd.setCursor(0,1);
        lcd.print("da com sucesso!");
        
      }
    }
    }
      mensagem_identificacao();
 }else{ 
    Serial.println("Acesso Negado!");
    digitalWrite(led_vermelho, HIGH);
    digitalWrite(led_verde, LOW);
    tone  (buzzer, 700);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Nao Aluno!");
    lcd.setCursor(0,1);
    lcd.print("Acesso Negado!");
    delay(500);
    noTone(buzzer);
    delay(1000);
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_verde, LOW);
    mensagem_identificacao();
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
void mensagem_identificacao(){
 //Display
  lcd.setBacklight(HIGH); //Liga a luz de fundo do display(Mesmo sem isso a mensagem aparecerá, mas a "luz" do display estará apagada)
  //Configuração padrão de Display
  lcd.clear();
  lcd.setCursor(0,0); //Linha 0, Coluna 1
  lcd.print("Ola! Por favor");
  lcd.setCursor(0,1); //Linha 0, Coluna 2
  lcd.print("se identifique.");
}
