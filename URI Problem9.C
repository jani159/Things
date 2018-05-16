#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int NUMBER, HOURS;
	float gain;
	printf("Insira o numero do funcionario: \n");
	scanf("%d",&NUMBER);
	printf("Insira a quantidade de horas trabalhadas: \n");
	scanf("%d",&HOURS);
	printf("Insira quanto ele ganha por hora: \n");
	scanf("%f",&gain);
	float salary;
	salary = HOURS*gain;
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = %.2f\n", salary);
	return 0;
}
