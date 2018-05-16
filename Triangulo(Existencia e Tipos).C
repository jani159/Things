#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a, b, c; //Declaramos os lads do traingulo
	
	printf("Insira os lados do triangulo: \n");
	
	scanf("%f %f %f",&a ,&b ,&c); //Lemos os lados
	
	if((a<b+c) && (b<a+c) && (c<a+b)){ //Primeiro verificaremos a existencia desse triangulo
	
	printf("Eh um triangulo\n");
	
		if(a==b && b==c) //Caso ele ja seja um triangulo, veremos agora de que tipo ele eh
			printf("Eh equilatero");
		else if((a==b) || (b==c )|| (a==c))
			printf("Eh isoceles");
	else
	printf("Eh escaleno");
} //Caso ele não seja um triangulo pulamos direto para este caso
    else 
    printf("Nao eh um triangulo");
return 0;
}

