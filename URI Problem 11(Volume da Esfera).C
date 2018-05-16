#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float raio, volume, pi;
	printf("Insira o raio da esfera:\n");
	scanf("%f",&raio);
	pi = 3.14159;
	volume = (4.0/3)*pi*(raio*raio*raio);
	printf("VOLUME = %f",volume);
	return 0;
}
