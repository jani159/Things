#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	float raio;
	printf("Digite o raio da circunferencia: \n");
	scanf("%f",&raio);
	float pi;
	pi = 3.14159;
	float area;
	area = pi*(raio*raio);
	printf("A area eh: %f", area);
	return 0;
}
