#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float A, B, C, pi;
	pi = 3.14159;
	//Área das figuras
	float a1, a2, a3, a4, a5;
	//a1 = area do triangulo
	//a2 = area do circulo
	//a3 = area do trapezio
	//a4 = area do quadrado
	//a5 = area do retangulo
	scanf("%f",&A);
	scanf("%f",&B);
	scanf("%f",&C);
	//Definir cada uma das areas
	a1 = (A*C)/2;
	a2 = pi*(C*C);
	a3 = (A+B)*C/2;
	a4 = B*B;
	a5 = A*B;
	//Imprimir todas as areas
	printf("TRIANGULO = %.3f\n CIRCULO = %.3f\n TRAPEZIO = %.3f\n QUADRADO = %.3f\n RETANGULO = %.3f\n", a1, a2, a3, a4, a5);
	return 0;
}
