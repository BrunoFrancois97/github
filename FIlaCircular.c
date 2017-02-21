#include <stdio.h>
#include "Fila_Circular.h"

main(){
	FilaCircular Q;
	int x = 5,zubs;
	bool ok;
	criarFilaVazia(&Q);
	printf("\nFILA CIRCULAR VAZIA CRIADA");
	zubs=acessarInicio(&Q);
	printf("\nZUBS = %d",zubs);
	ok=verificarFilaVazia(&Q);
	printf("\nVAZIA = %d",ok);
	push(&Q,x);
	ok=verificarFilaVazia(&Q);
	printf("\nVAZIA = %d",ok);
	push(&Q,x);
	push(&Q,x);
	push(&Q,x);
	push(&Q,x);
	push(&Q,x);
	push(&Q,x);
	push(&Q,x);
    ok=verificarFilaCheia(&Q);
    printf("\nCHEIA = %d",ok);
    pop(&Q);
    pop(&Q);
    pop(&Q);
    pop(&Q);
    pop(&Q);
    pop(&Q);
    pop(&Q);
    pop(&Q);
    ok=verificarFilaVazia(&Q);
	printf("\nVAZIA = %d",ok);
	push(&Q,x);
	push(&Q,x);
	push(&Q,x);
	push(&Q,x);
	push(&Q,x);
	push(&Q,x);
	push(&Q,x);
	ok=verificarFilaCheia(&Q);
    printf("\nCHEIA = %d",ok);
    esvaziarFila(&Q);
    ok=verificarFilaVazia(&Q);
	printf("\nVAZIA = %d",ok);
	
}
