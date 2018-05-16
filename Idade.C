//Recebe o ano que a pessoa nasceu e diz a idade

#include <stdio.h>
#include <string.h>

int main(){
	printf("Diga o ano em que nasceu:");
	int year;
	scanf("%d",&year);
	int idade;
	idade =  2018-year;
	printf("Sua idade eh: %d",idade);
	return 0;
}
