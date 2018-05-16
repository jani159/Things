#include <stdio.h>
#include <stdlib.h>

struct struct_pilha {
    int max;
    int topo;
    int *elems;
};

typedef struct struct_pilha pilha;

pilha* cria_pilha(int n) {
    pilha* ret = malloc(sizeof(pilha));
    ret->max = n;
    ret->topo = 0;
    ret->elems = malloc(sizeof(int) * n);
    return ret;
}

void destroi_pilha(pilha *p) {
    free(p->elems);
    free(p);
}

int empty(pilha *p) {
    return p->topo == 0;
}

void push (pilha *p, int x) {
    if (p->topo == p->max) {
        printf("Erro stack overflow\n");
        exit(1);
    }
    p->elems[p->topo++] = x;
}

int pop (pilha *p) {
    if (empty(p)) {
        printf("Erro: pilha vazia\n");
        exit(1);
    }
    return p->elems[--p->topo];
}

int peek(pilha *p) {
    if (empty(p)) {
        printf("Erro: pilha vazia\n");
        exit(1);
    }
    return p->elems[p->topo - 1];
}

void imprime_pilha(pilha *p) {
    int i;
    printf("P: ");
    for (i = 0; i < p->topo; i++)
        printf("%d ", p->elems[i]);
    printf("\n");
}


int main (int argc, char** argv) {
    pilha* ps1 = cria_pilha(5);
    pilha* ps2 = cria_pilha(5);
    
    push(ps1, 10);
    push(ps2, 20);
    push(ps1, 30);    
    push(ps1, pop(ps2));

    printf("Pilha 1 - ");
    imprime_pilha(ps1);
    printf("Pilha 2 - ");
    imprime_pilha(ps2);
    
    destroi_pilha(ps1);
    destroi_pilha(ps2);
return 0;
}
