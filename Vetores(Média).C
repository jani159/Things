//Vetores (Exemplo2);Média
#include<stdio.h>
#include<stdlib.h>



int main(){
	float notas[3]; // Declaramos em um vetor as variáveis

	printf("Insira a 1 nota: \n");
	scanf("%f",&notas[0]);//Lemos a 1 nota e a salvamos no 1 espaço do vetor

	printf("Insira a 2 nota: \n");
	scanf("%f", &notas[1]);//Lemos a 2 nota e a salvamos no 2 espaço do veetor

	notas[2] = (notas[0] + notas[1])/2;// Declaramos a média como sendo um dos vetores "notas"

	printf("A media do aluno eh: %.2f \n", notas[2]);//Imprimimos a média
return 0;
}
