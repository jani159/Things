//Outro exemplo de ponteiro( É necessário o uso da biblioteca stdlib.h);
#include<stdio.h>
#include<stdlib.h>



int main(){
	int valor;
	//Declaração do ponteiro
	printf("Digite o número a ser guardado:\n");
	
	scanf("%d",&valor);
	
	
	int*ptr; //É usado no caso um "*" para definir um ponteiro
	//Atribuindo o endereço da variável valor ao ponteiro
	
	ptr = &valor; //Lê-se que o ponteiro recebe a variável valor

	printf("Conteudo da variavel valor: %d\n", valor);
	printf("Endereco da variavel valor: %x \n",&valor);//Notação para imprimir o endereço
	printf("Conteudo da variavel ponteiro ptr: %x", ptr); //Irá imprimir o endereço da variável valor
return 0;	 
}
