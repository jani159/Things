//O código em questão recebe um ano e diz se é bissexto ou não

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int  ano, resto1, resto2;
	printf("Insira o ano desejado:");
	scanf("%d",&ano);
	resto1 = ano%4;
	resto2 = ano%100;
	if(resto1 == 0 || resto2 == 0){
		
		printf("Esse ano eh bissexto");
	}
	else{
		printf("Esse ano eh normal");
	}
	return 0;
}
