#include <stdio.h>
#include<stdlib.h>
#include<math.h>
//Um ponteiro é uma variável capaz de armazenar um endereço de memória ou o endereço de uma variável
//Um ponteiro salva apenas o enderço de memória alocado para salvar a variável
int main(){
	//Exemplo de ponteiro
	int a, b, c;
	int*ptr; //Declara um ponteiro para um inteiro
	          //Um ponteiro para uma variável do tipo inteiro
	a = 90;
	b = 2;
	c = 3;
	ptr = &a; //Diz-se que o ponteiro recebe o valor de a
	printf("Valor do ponteiro: %p, Conteudo do ponteiro: %d\n",ptr,*ptr);

	return 0;
}
