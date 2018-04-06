/*O seguinte programa eh capaz de fazer piscar o  "led1" quando o "button1" for precionado
e armazenar a quantidade de vezes que o "button1" foi precionado e quando o button2 for 
precionado, o memsmo fará com que o "led2" se acenda a quantidade de vezes que o "button1"
foi precionado.
*/

//Declaração de variáveis
int led1 = 13;
int led2 = 12;
int button1 = 11;
int button2 = 10;
int estado_button1 = 0;
int estado_button2 = 0;
int i = 0; //Esta variável será  um contador das vezes que o botão 1 foi precionado
int a = 0;//Esta variável irá servir de "limitador"
//Definimos entradas e saída(portas)
void setup(){
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(button1, INPUT);
	pinMode(button2, INPUT);

}

/*Criar função pisca led1 e led2
void pisca_led1(int led1){
	digitalWrite(led1, HIGH);
	delay(1000);
	digitalWrite(led1,LOW);
	delay(1000);
}

void pisca_led2(int led2){
	digitalWrite(led2, HIGH);
	delay(1000);
	digitalWrite(led2,LOW);
	delay(1000);
}
*/
//Processamento e saida
void loop(){
  estado_button1 = digitalRead(button1);
	//Acenderemos o "led1" quando o "button1" for precionado e contaremos quanats vezes ele  foi apertado
	if(estado_button1 == HIGH){
      	digitalWrite(led1, HIGH);
      	delay(750);
      	digitalWrite(led1,LOW);
      	delay(250);
		i = i + 1; //"i" irá crescer de um em um
	}
  estado_button2 = digitalRead(button2);
	//Acenderemos o "led2" quando o "button2" for precionado
		if(estado_button2 == HIGH){
			while(a < i){ //Iremos fazer com que a variável "a" seja a quantidade de vezes que o "led2" irá  piscar e ela será limitada por "i"
				digitalWrite(led2, HIGH);
				delay(750);
				digitalWrite(led2,LOW);
				delay(250);
				a  = a + 1; //"a" irá  crescer de um em um
			}
		}

}
