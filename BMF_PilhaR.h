	#include <stdio.h>
	#include "Booleano.h"
	#define SINAL -1
	 
	
	#define MaxR 50
	typedef struct {
	      int topo;       // topo indica o local onde se encontra o último item colocado na pilha
	      float tabela[MaxR];
	} PilhaR;
	
	/* interface */
	
	PilhaR criarPilhaRVazia();
	float acessarTopoR(PilhaR);
	bool verificarPilhaRVazia(PilhaR);
	bool verificarPilhaRCheia(PilhaR);
	PilhaR pushPilhaR(PilhaR, float);
	PilhaR popPilhaR(PilhaR);
	void mostrarPilhaR(PilhaR);
	/* implementações */
	
	PilhaR criarPilhaRVazia(){
	        PilhaR x;
	        x.topo = SINAL;
	        return x;
	}
	
	float acessarTopoR(PilhaR s){
		 float elemento;
		 elemento = SINAL;
	     if (s.topo != SINAL){
	     	elemento = s.tabela[s.topo];
		 }
		 return elemento;
	}     
	
	bool verificarPilhaRVazia(PilhaR s){
		 bool ok;
		 ok = FALSE;
	     if (s.topo == SINAL){
	     	ok = TRUE;
		 }
		 return ok;
	}
	
	bool verificarPilhaRCheia(PilhaR s){
		 bool ok;
		 ok = FALSE;
	     if (s.topo == MaxR-1){
	     	ok=TRUE;
		 }
		 return ok;
	}
	
	PilhaR pushPilhaR(PilhaR s, float a){
	       if(s.topo < MaxR-1){
	       	  s.tabela[s.topo+1] = a;
	       	  s.topo = s.topo + 1;
		   }
		   return s;
	}
	
	PilhaR popPilhaR(PilhaR s){
	       if(s.topo > SINAL){
	       	s.topo = s.topo - 1;
		   }
		   return s;
	}
	void mostrarPilhaR(PilhaR s){
		int i;
		if(s.topo > SINAL){
			for(i=0;i<=s.topo;i++){
				printf("%f",s.tabela[i]);
			}
		}
		else{
			printf("\nPILHA VAZIA\n");
		}
	}

