//Recebe as notas de um aluno e diz se ele foi aprovado ou não.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float nota1, nota2, media;
	printf("Insira as notas do aluno: \n");
	scanf("%f %f",&nota1, &nota2);
	media = (nota1+nota2)/2.0;
	if(media>7){
		printf("O aluno foi Aprovado \n");
	if(media<7)
	    printf("O aluno esta de Recuperacao \n");
	else if (media<3) 
	    printf("O aluno esta Reprovado \n");
	}
	return 0;
}
