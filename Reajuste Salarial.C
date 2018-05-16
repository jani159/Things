#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//Havera um reajuste de 5% no salario dos funcionarios
	int salary1;
	float salary2;
	printf("Insira o antigo salario do funcionario: \n");
	scanf("%d",&salary1);
	salary2 = salary1*0.95;
	if(salary1 <= 750)
	    salary2 = salary1 + 100;
	printf("O novo salario eh: %.2f \n", salary2);;
	return 0;
}

