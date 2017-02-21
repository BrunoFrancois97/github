#define SINAL 0
#include <stdlib.h>
#include <stdio.h>
typedef struct celula{
	int item;
	struct celula * next;
	struct celula * previous;
}Celula;

typedef struct {
	int tamanho;
	Celula * inicio;
	Celula * fim;
}Lista;

Lista criarListaVazia();
void inserirLista(Lista *,int);


main(){
	Lista x;
	int posicao,vazia;
	x = criarListaVazia(&x,5);
	inserirLista(&x,5);
}


Lista criarListaVazia(){
	Lista a;
	a.tamanho = SINAL;
	a.inicio = NULL;
	a.fim = NULL;
	return a;
}

void inserirLista(Lista *L,int v){
	Celula * novo;
	novo = (Celula*)malloc(sizeof(Celula));
	novo->item = v;
	novo->next = L->inicio;
	novo ->previous = NULL;
	L->inicio = novo;
	L->tamanho = L->tamanho + 1;
}
