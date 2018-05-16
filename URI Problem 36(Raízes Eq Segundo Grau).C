#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	double A, B, C; // Declarar os coeficientes do polinomio
	float x1, x2, delta;
	scanf("%lf%",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	delta = (B*B)-(4.0*A*C);
	x1 = (-B+sqrt(delta))/(2.0*A);
	x2 = (-B-sqrt(delta))/(2.0*A);
	if(delta<0){
	    printf("O polinomio não possui raizes reais");
}
	else{
		printf("R1 = %.5f ,R2 = %.5f", x1, x2);
	}
	return 0;	
}
