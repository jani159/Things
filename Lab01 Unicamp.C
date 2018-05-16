//LAB-01 MC102  JANIEL LEVI, RA:199414

/*Receber como entrada 16 números dispostos em duas linhas
	*1 Linha conterá Bi >=0 
	*2 Linha conterá Ci >=0
	*Onde i varia de 1 <= i <= 8
	*Os 16 números da entrada serão transformados em 8 números Xi, onde inicialmente Xi = Bi e Ci irá condicionar os elementos de Xi	
*/

/*Algoritimo
	.Primeiro leremos os 16 elementos 
	.Alocamos os 8 primeiros elementos para Xi
	.Colocamos as condições para Ci
	.Fazemos um novo Xi
	.Transformamos Xi no alfabeto (Letra maiúscula)
*/

#include <stdio.h>


int main(int argc, char** argv){   
	
	int B1,B2,B3,B4,B5,B6,B7,B8; //Declaramos Bi  
	int C1,C2,C3,C4,C5,C6,C7,C8; //Declaramos Ci
	char a,b,c,d,e,f,g,h;//Declaramos os char's que serão utilizados posteriormente
	char i = 32;//Declaramos um char que recebe o valor do espaço em ASCII
	
	//printf("Digite os inteiros: ");
	
	scanf("%d%d%d%d%d%d%d%d",&B1,&B2,&B3,&B4,&B5,&B6,&B7,&B8); //Salvamos as 8 primeiras entradas em Bi
	
	scanf("%d%d%d%d%d%d%d%d",&C1,&C2,&C3,&C4,&C5,&C6,&C7,&C8);//Salvamos as 8 primeiras entradadas em Ci

	int X1,X2,X3,X4,X5,X6,X7,X8;//Declaramos Xi
	X1 = B1;
	X2 = B2;
	X3 = B3;
	X4 = B4;
	X5 = B5;
	X6 = B6;
	X7 = B7;
	X8 = B8;
	
	//printf("O Xi inicial eh: %d %d %d %d %d %d %d %d \n",X1,X2,X3,X4,X5,X6,X7,X8);//Imprimimos o Xi antes de ser alterado pelo Ci
	//printf("Os Diacriticos sao: %d %d %d %d %d %d %d %d\n", C1,C2,C3,C4,C5,C6,C7,C8);//Imprimimos os Diacriticos
	
	if((C4 != 2) && (C4 != 9)){ //Se C4 for diferente de 2 ou C4 for diferente de 9, some 3 a todas as entradas Xi
		X1 = X1 + 3;
		X2 = X2 + 3;
		X3 = X3 + 3;
		X4 = X4 + 3;
		X5 = X5 + 3;
		X6 = X6 + 3;
		X7 = X7 + 3;
		X8 = X8 + 3;	
}
	if((C1>=11) && (C1<=42)){//Se C1 estiver entre 11 e 42, some 7 ao X8
		X8 = X8 + 7;
		X7 = X7 +8;
}
	if((C1%2 != 0) && (C2%2 != 0) && (C3%2 != 0) && (C4%2 != 0) && (C5%2 != 0) && (C6%2 != 0) && (C7%2 != 0) && (C8%2 != 0)){//Se nenhum dos Ci for divisível por 2, some 2*C5 a X1
		X1 = X1 + (2*C5);
}
	if(((C3<20) && (C6>20)) || ((C6<20) && (C3>20))){/*Se C3 ou C6 forem menores do que 20, some 6 a X4 e a X5 (EXCLUSIVO)*/
		X4 = X4 + 6;
		X5 = X5 + 6;
}
	if((C8!=3) && (C8>=C7)){//Se C8 for diferente de 3 e menor que C7, some X3 a C2
		X3 = X3 + C2;
}
	int produto;//Declaramos uma variável produto
	produto = C1*C2*C3*C4*C5*C6*C7*C8;//Damos a variavel produto o valor do produto de todos os Diacriticos
	if(((produto%5) == 0) && (((produto%10) != 0) || ((produto) = 30))){//Lembrar de declarar multiplicação dps
		X6 = X6 + 1;
}
	if((C2==C8) || (C3==C7)){//Se C2 for igual a C8 ou C3 for igual a C7, adicionamos um a X6
		X6 = X6 + 1;
}
//Espaço é o numero 27 e iremos utilizar a tabela ASCII onde o espaço eh char a = 32;
//Lembrar de imprimir letras maiúsculas
	//printf("O novo Xi eh: %d %d %d %d %d %d %d %d \n",X1,X2,X3,X4,X5,X6,X7,X8);//Imprimimos o novo Xi (Apagar)

/*Sabemos que Xi tem números maiores que um e menores que 27, e que na tabela ASCII 65 = A 
	e 90 = Z 
*/
 //Caso Xi esteja entre 0 e 27 eles obedeceram os seguintes if's, caso contrário, serão "descartados"
		if((X1 != 0) && (X1>=1) && (X1<=26)){
			 a = X1 + 64;
			 printf("%c",a);
}
			if((X1 == 27)){
				X1 = i;
				printf("%c",i);
}
		if((X2 != 0) && (X2>=1) && (X2<=26)){
			 b = X2 + 64;
			 printf("%c",b);
}
			if(X2 == 27){
				X2 = i;
				printf("%c",i);
}
		if((X3 != 0) && (X3>=1) && (X3<=26)){
			 c = X3 + 64;
			 printf("%c",c);
}
			if(X3 == 27){
				X3 = 1;
				printf("%c",i);
}
		if((X4 != 0) && (X4>=1) && (X4<=26)){
			 d = X4 + 64;
			 printf("%c",d);
}
			if(X4 == 27){
				X4 = i;
				printf("%c",i);
}
		if((X5 != 0) && (X5>=1) && (X5<=26)){
			 e = X5 + 64;
			 printf("%c",e);
}
			if(X5 == 27){
				X5 = i;
				printf("%c",i);
}
		if((X6 != 0) && (X6>=1) && (X6<=26)){
			 f = X6 + 64;
			 printf("%c",f);
}
			if(X6 == 27){
				X6 = i;
				printf("%c",i);
}

		if((X7 != 0) && (X7>=1) && (X7<=26)){
			 g = X7 + 64;
			 printf("%c",g);
}
			if(X7 == 27){
				X7 = i;
				printf("%c",i);
}
		if((X8 != 0) && (X8>=1) && (X8<=26)){
			 h = X8 + 64;
			 printf("%c",h);
}
			if(X8 == 27){
				X8 = i;
				printf("%c\n",i);
}
	//printf("%c%c%c%c%c%c%c%c \n", a,b,c,d,e,f,g,h);

return 0;
}
