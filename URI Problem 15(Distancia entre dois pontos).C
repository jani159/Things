#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//Coordenadas dos  pontos
	float x1, y1, x2, y2;
	float distancia;
	scanf("%f",&x1);
	scanf("%f",&y1);
	scanf("%f",&x2);
	scanf("%f",&y2);
	distancia = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));//Formula da distancia entre os pontos
	printf("%.4f",distancia);//Imprimimos a distancia entre os pontos com precisão de 2 casas decimais	
	return 0;
}
