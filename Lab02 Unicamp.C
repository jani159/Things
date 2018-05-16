/*LAB-02 MC102 TURMA D JANIEL LEVI, RA:199414


O programa deverá receber todas as estimativas de tempo
entre os caminhos que levam às estrelas, escolher e exibir 
o menor dos caminhos entre as estrelas.

O Algoritimo:
	
	*1. Primeiramente, iremos excluir os casos em que o menor dos caminhos
	indivíduais é divisível por 6.

	*2. Pegaremos o menor dos caminhos que levam até a segunda estrela.
*/

#include <stdio.h>

int main(int argc, char** argv){

	int A,B,C,D,E,F,G,H,I,J,K; /* declaramos os caminhos*/
	
	int c1,c2,c3,c4,c5,c6,c7,c8,c9;

	scanf("%d%d%d%d%d%d%d%d%d%d%d",&A, &B, &C, &D, &E, &F, &G, &H, &I, &J, &K);/*lêmos as entradas*/
	
	c1 = A+E+J;
	c2 = A+E+I+K;
	c3 = A+D+F+J;
	c4 = A+D+F+I+K;
	c5 = A+D+G+K;
	c6 = B+F+J;
	c7 = B+F+I+K;
	c8 = B+G+K;
	c9 = C+H+K; 
	
	/*Caso em que A é o menor caminho entre B e C*/

	if((A<B) && (A<C)){
		if((E<D) && (J<I) && (c1%6 == 0)){
			printf("0\n");
			return 0;
		}
		if((E<D) && (I<J) && (c2%6 == 0)){
			printf("0\n");
			return 0;
		}
		if((D<E) && (F<G) && (J<I) && (c3%6 == 0)){
			printf("0\n");
			return 0;
		}
		if((D<E) && (F<G) && (I<J) && (c4%6 == 0)){
			printf("0\n");
			return 0;
		}
		if((D<E) && (G<F) && (c5%6 == 0)){
			printf("0\n");
			return 0;
		}
	} 
	/*Caso em que B é o menor caminho entre A e C*/

	if((B<A) && (B<C)){
		if((F<G) && (J<I) && (c6%6 == 0)){
			printf("0\n");
			return 0;
		}
		if((F<G) && (I<J) && (c7%6 == 0)){
			printf("0\n");
			return 0;
		}
		if((G<F) && (c8%6 == 0)){
			printf("0\n");
			return 0;
		}
	}
	/*Caso em que C é o menor caminho entre A e B*/

	if((C<A) && (C<B) && (c9%6 == 0)){
		printf("0\n");
		return 0;
	}
	if(((c1)<(c2)) && ((c1)<(c3)) && ((c1)<(c4)) && ((c1)<(c5)) && ((c1)<(c6)) && ((c1)<(c7)) && ((c1)<(c8)) && ((c1)<(c9))){
		printf("%d\n",c1);
	}
	if(((c2)<(c1)) && ((c2)<(c3)) && ((c2)<(c4)) && ((c1)<(c5)) && ((c1)<(c6)) && ((c1)<(c7)) && ((c1)<(c8)) && ((c1)<(c9))){
		printf("%d\n",c2);
	}
	if(((c3)<(c1)) && ((c3)<(c2)) && ((c3)<(c4)) && ((c3)<(c5)) && ((c3)<(c6)) && ((c3)<(c7)) && ((c3)<(c8)) && ((c3)<(c9))){
		printf("%d\n",c3);
	}
	if(((c4)<(c1)) && ((c4)<(c2)) && ((c4)<(c3)) && ((c4)<(c5)) && ((c4)<(c6)) && ((c4)<(c7)) && ((c4)<(c8)) && ((c4)<(c9))){
		printf("%d\n", c4);
	}
	if(((c5)<(c1)) && ((c5)<(c2)) && ((c5)<(c3)) && ((c5)<(c4)) && ((c5)<(c6)) && ((c5)<(c7)) && ((c5)<(c8)) && ((c5)<(c9))){
		printf("%d\n", c5);
	}
	if(((c6)<(c1)) && ((c6)<(c2)) && ((c6)<(c3)) && ((c6)<(c4)) && ((c6)<(c5)) && ((c6)<(c7)) && ((c6)<(c8)) && ((c6)<(c9))){
		printf("%d\n", c6);
	}
	if(((c7)<(c1)) && ((c7)<(c2)) && ((c7)<(c3)) && ((c7)<(c4)) && ((c7)<(c5)) && ((c7)<(c6)) && ((c7)<(c8)) && ((c7)<(c9))){
		printf("%d\n", c7);
	}
	if(((c8)<(c1)) && ((c8)<(c2)) && ((c8)<(c3)) && ((c8)<(c4)) && ((c8)<(c5)) && ((c8)<(c6)) && ((c8)<(c7)) && ((c8)<(c9))){
		printf("%d\n", c8);
	}
	if(((c9)<(c1)) && ((c9)<(c2)) && ((c9)<(c3)) && ((c9)<(c4)) && ((c9)<(c5)) && ((c9)<(c6)) && ((c9)<(c7)) && ((c9)<(c8))){
		printf("%d\n", c9);
	}
return 0;
}
