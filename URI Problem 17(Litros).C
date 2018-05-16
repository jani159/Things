#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int t, vm, d;
	//t= tempo de viagem, vm= velocidade media, d= distancia percorrida
	//lg= litros gastos
	scanf("%d",&t);
	scanf("%d",&vm);
	d = t*vm;
	float lg;
	//O carro faz 12km/l
	lg = d/12.0;
	printf("Foram gastos = %.3f litros", lg);
	return 0;
}
