//Incluímos a biblioteca que contém o DISPLAY 16X2
#include <LiquidCrystal.h>

//Listamos os pinos utilizados pelo DISPLAY
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int led1 = 10; //LED Vermelho
int i1 = 0;
int led2 = 9; //LED Verde
int i2 = 0;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  //Define o número de colunas e linhas do LCD
  lcd.begin(16,2);
}
void loop(){
  //Limpamos a tela
  lcd.clear();
  //Posicionamos o cursor na coluna 3, linha 0
  lcd.setCursor(3,0);
  digitalWrite(led1,HIGH);
  delay(300);
  lcd.print("PARE!");
  delay(3000);
  digitalWrite(led1,LOW);
  delay(300);
  lcd.clear();
  lcd.setCursor(3,0);
  digitalWrite(led2,HIGH);
  delay(300);
  lcd.print("SIGA!");
  delay(3000);
  digitalWrite(led2, LOW);
  delay(500);
}

