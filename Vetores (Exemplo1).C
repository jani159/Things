// Vetores (Exemplo1)

#include <stdio.h>
#include <stdlib.h>



int main(){
	//printf("Digite 3 numeros inteiros:\n"); //Pedimos para que o usuario digite 3 valores inteiros

	int valores[3],// Declaramos um vetor, o qual será responsável por guardar os 3 valores.
	indice;

	for(indice=0; indice<=2;  indice ++){  //No "for", declaramos que o indice deve começar do zero e ir até o número 2, salvando 3 números
		
		printf("Entre com o numero %d: ", indice+1); /* Para que seja entendível ao "escritor", aumentamos o indice, para que comece do "1"
		e iremos aumentar o índice de 1 a 3 */
		
		scanf("%d", &valores[indice]); // Escaneamos número por número de acordo com o índice               
	}
	for(indice=0; indice <= 2; indice++){
		printf("Numero %d = %d \n", indice+1, valores[indice]);/*Imprimimos os números lidos, em cada linha um número
	e aumentando o indice de "1", para que não comeceno "0"*/
	}
	return 0;
}

	/*Para salvarmos numeros nos, vetores não podemos ultilizar o comando scanf, 
	pois o endreço da função é o endereço da primeira variável, assim o endereço
	do valor[2] é igual ao endereço da variável valor[0]*/
