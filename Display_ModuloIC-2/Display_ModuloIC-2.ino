//Inclusão da biblioteca do LCD e do móodulo IC-2
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Inicializa o display no IC-2
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);
 
void setup()
{
 lcd.begin (16,2); //Inicializa o display
}
 
void loop()
{
  lcd.setBacklight(HIGH); //Liga a luz do display(Mesmo sem isso a mensagem aparecerá, mas a "luz" do display estará apagada)
  //Configuração padrão de display
  lcd.setCursor(0,0); //Coluna 0
  lcd.print("Ola aluno!!"); //Mensagem no display
  lcd.setCursor(0,1); //Coluna 2
  lcd.print("Aproxime seu cartao!");
}
