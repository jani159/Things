#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int horas;
	float salary;
	printf("Horas trabalhadas: \n");
	scanf("%d",&horas);
	//O salaraio eh igual as horas trabalhadas vezes 19.50
	salary = horas*19.50;
	//Entretanto, se o salário for maior que 1500, eh necessário tirar 10% de imposto
	if(salary>1500)
		salary = 0.9*salary;
	printf("O salario liquido do funcionario eh: %.2f \n", salary);
	return 0;		
}
