#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//X é o numero de km rodados e Y os Litros gastos
	int X;
	float Y, gasto;
	scanf("%d",&X);
	scanf("%f",&Y);
	gasto = X/Y;
	printf("%.3f km/l", gasto);
	return 0;
}
