#include "Lista_Ligada.h"

main(){
	Lista x;
	int posicao,vazia;
	x = criarListaVazia();
	printf("\n LISTA LIGADA VAZIA CRAIDA");
	vazia=verificarVazia(&x);
	printf("\n vazia = %d",vazia);
	inserirLista(&x,5);
	inserirLista(&x,8);
	inserirLista(&x,4);
	inserirLista(&x,2);
	inserirLista(&x,3);
	inserirLista(&x,9);
	mostrarTodos(&x);
	inserirNaPosicaoK(&x,4,1);
	vazia=verificarVazia(&x);
	printf("\n vazia = %d",vazia);
	mostrarTodos(&x);
	posicao = buscarElemento(&x,1);
	printf("\nPOSICAO = %d",posicao);
	
	
}
