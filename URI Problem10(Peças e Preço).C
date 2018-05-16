#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int cod1,pecas1, cod2, pecas2;
	float valor1, valor2;
	float total;
	//Inserir o código da peça, a quantidade e o valor de cada uma
	//Peças do tipo1:
	scanf("%d",&cod1);
	scanf("%d",&pecas1);
	scanf("%f",&valor1);
    //Peças do tipo 2:
	scanf("%d",&cod2);
	scanf("%d",&pecas2);
	scanf("%f",&valor2);
	//Calcular o valor total a ser pago
	total = (pecas1*valor1)+(pecas2*valor2);
	printf("VALOR A PAGAR: R$ %.2f", total);
	return 0; 
}
