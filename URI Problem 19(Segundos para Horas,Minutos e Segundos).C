#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int timesec, timehour, r1, timemin, r2, timesec2;
	scanf("%d", &timesec);
	//1 Hora = 3600s
	//1 Minuto = 60s
	//1 Segundo = 1s
	if(timesec>=3600){
		timehour = timesec/3600;//Lembrar de imprimir timehour
	}
	else{
		timehour = 0;
	}
	r1 = timesec%3600;
	if(r1>=60){
		timemin = r1/60;//Lembra de imprimir timemin
	}
	else{
		timemin = 0;
	}
	r2 = timesec%60;
	if(r2>=1){
		timesec2 = r2;//Lembrar de imprimir timesec
	}
	else{
		timesec2 = 0;
	}
	printf("%d:%d:%d", timehour, timemin, timesec2);
return 0;
}
