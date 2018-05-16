#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("Diga o valor a ser sacado:\n");
	int dh, notas100, resto100, notas50, resto50, notas20, resto20, notas10, resto10, notas5, resto5, notas2, resto2, notas1;
	scanf("%d", &dh);
	//Dividir primeiramente o dinheiro da entrada por 100
	//Ao dividir o valor inicical e os valores seguintes pelo valor das notas tem-se a quantidade de notas
	//notasN = x/N;
	notas100 = dh/100;
	resto100  = dh%100; //Pegar o resto e continuar a divisão pelos outros valores
	//Se o resto da divisão for maior que 50 significa que o valor ainda pode ser dividido por 50
	if (resto100>=50){
		//Pegando-se o resto da divisao anterior e dividindo-o pelo valor da nota que se quer se tem a quantidade procurada de notas
		notas50 = resto100/50;//Lembrar de imprimir notas50
	}
	//Se não, a quantidade de notas do determinado valor eh zero
	else{
		notas50 = 0; 	
	}
	resto50	= resto100%50;
	if(resto50>=20){
		notas20 = resto50/20;//Lembrar de imprimir notas20
   }
   else{
   	   notas20 = 0;
   }
   resto20 = resto50%20;
   if(resto20>=10){
   	  notas10 = resto20/10;//Lembrar de imprimir notas10
   }
   else{
   	notas10 = 0;
   }
   resto10 = resto20%10;
   if(resto10>=5){
   	  notas5 = resto10/5;//Lembrar de imprimir notas5
   }
   else{
   	notas5 = 0;
   }
   resto5 = resto10%5;
   if(resto5>=2){
   	   notas2 = resto5/2;//Lembrar de imprimir notas2
   }
   else{
   	notas2 = 0;
   }
   resto2 = resto5%2;
   if(resto2>=1){
   	   notas1 = resto2;//Lembrar de imprimir notas1
   }
   else{
   	notas1 = 0;
   }
   printf("%d nota(s) de R$100,00. \n", notas100);
   printf("%d nota(s) de R$50,00. \n", notas50);
   printf("%d nota(s) de R$20,00. \n", notas20);
   printf("%d nota(s) de R$10,00. \n", notas10);
   printf("%d nota(s) de R$5,00. \n", notas5);
   printf("%d nota(s) de R$2,00. \n", notas2);
   printf("%d nota(s) de R$1,00. \n", notas1);
	return 0;
}
