#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int dias, ano, r1, mes, r2, dias2;
	printf("Digite a quantide de dias:\n");
	scanf("%d",&dias);
	if(dias>=365){
		ano = dias/365;
	}
	else{
		ano = 0;
	}
	r1 = dias%365;
	if(r1>=30){
		mes = r1/30;
	}
	else{
		mes = 0;
	}
	r2 = dias%30;
	if(r2>=1){
		dias2 = r2;
	}
	else{
		r2 = 0;
	}
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)", ano, mes,  dias2);
	return 0;
	
}
