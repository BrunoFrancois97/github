#define SINAL 0
#include <stdlib.h>
#include <stdio.h>
typedef struct celula{
	int item;
	struct celula * next;
}Celula;

typedef struct {
	int tamanho;
	Celula * inicio;
}Lista;

Lista criarListaVazia();
void inserirLista(Lista *,int);
void mostrarTodos(Lista *);
void inserirNaPosicaoK(Lista *,int,int);
int buscarElemento(Lista *,int);
int verificarVazia(Lista*);


Lista criarListaVazia(){
	Lista a;
	a.tamanho = SINAL;
	a.inicio = NULL;
	return a;
}

void inserirLista(Lista *L,int v){
	Celula * novo;
	novo = (Celula*)malloc(sizeof(Celula));
	novo->item = v;
	novo->next = L->inicio;
	L->inicio = novo;
	L->tamanho = L->tamanho + 1;
}

void mostrarTodos(Lista *L){
	Celula *p;
	p=L->inicio;
	printf("\n");
	while(p!=NULL){
		printf(" %d ",p->item);
		p = p->next;
	}
}

void inserirNaPosicaoK(Lista *L,int k,int v){
	Celula *p, *ant;
	Celula *novo;
	int pos;
	novo = (Celula*)malloc(sizeof(Celula));
	novo->item = v;
	pos = 1;
	p=L->inicio;
	ant = NULL;
	while(pos!= k){
		pos = pos +1;
		ant = p;
		p = p->next;
	}
	novo->next = p;
	if(ant == NULL){
		L->inicio = novo;
	}
	else{
		ant->next = novo;
	}
	L->tamanho = L->tamanho +1;
}

int buscarElemento(Lista *L,int v){
	int pos,c;
	Celula *p;
	pos = 0;
	if(L->inicio != NULL){
		p=L->inicio;
		c=1;
		do{
			if(p->item == v){
				pos = c;
			}
			else{
				p=p->next;
				c=c+1;
			}
		  	
		}while((pos == 0)&&(p!=NULL));
	}
	return pos;
}


int verificarVazia(Lista*L){
	int ok=0;
	if(L->tamanho == SINAL){
		ok = 1;
	}
	return ok;	
}











