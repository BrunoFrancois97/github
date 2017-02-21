#include "Booleano.h"

#define MaxFila 8
#define SINAL -1
#define fantasma -21

typedef struct {
	int inicio;
	int fim;
	int item[MaxFila];
}FilaCircular;

void criarFilaVazia(FilaCircular *);
int acessarInicio(FilaCircular *);
bool verificarFilaVazia(FilaCircular *);
bool verificarFilaCheia(FilaCircular *);
void push(FilaCircular *, int);
void pop(FilaCircular *);
void esvaziarFila(FilaCircular *);




void criarFilaVazia(FilaCircular *F){
	F->inicio = SINAL;
	F->fim = SINAL;
}

int acessarInicio(FilaCircular *F){
	int inicio = fantasma;
	if(F->inicio != SINAL){
		inicio = F->item[F->inicio];
	}
	return inicio;
}


bool verificarFilaVazia(FilaCircular *F){
	bool ok = FALSE;
	if(F->inicio == SINAL){
		ok = TRUE;
	}
	return ok;
}

bool verificarFilaCheia(FilaCircular *F){
	bool ok = FALSE;
	if((F->fim +1)% MaxFila == F->inicio){
		ok = TRUE;
	}
	return ok;		
}

void push(FilaCircular *F, int x){
	if((F->inicio == SINAL)&& (F->fim == SINAL)){
		F->inicio = F->inicio +1;
		F->fim = F->fim +1;
		F->item[F->fim] = x;
	}
	if((F->fim +1)% MaxFila != F->inicio){
		F->fim = F->fim +1;
		F->item[F->fim] = x;
	}
}

void pop(FilaCircular *F){
	if(F->inicio == F->fim){
		F->inicio = SINAL;
	    F->fim = SINAL;
	}
	if(F->inicio != SINAL){
		F->inicio = (F->inicio +1) % MaxFila;
	}
}

void esvaziarFila(FilaCircular *F){
	F->inicio = SINAL;
	F->fim = SINAL;
}







