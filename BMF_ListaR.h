	#include <stdlib.h>    
	#include <stdio.h>
	#include "Booleano.h"
	
	#define fantasma -1
	#define Maximo 50
	
	  
	typedef struct{
	  float vetor[Maximo];
	  int tamanho;
	} ListaR;
	
	
	ListaR criarLista();
	ListaR inserir(ListaR,float);
	int busca(ListaR,float); 
	float obterElemento(ListaR, int);             
	int obterTamanho(ListaR);
	bool verificarVazia(ListaR);               	
	bool verificarCheia(ListaR);
	ListaR esvaziar(ListaR);
	void mostrarLista(ListaR); 
	
	ListaR criarLista(){
	         ListaR listaA;
	         listaA.tamanho = 0;
	         return listaA;
	}
	
	ListaR inserir(ListaR a,float b){
		bool cheia;
		int tamanho;
		tamanho = a.tamanho;
		cheia = verificarCheia(a);
		if ((cheia == FALSE)&&(tamanho < Maximo-1)){
			a.vetor[tamanho+1] = b;
			a.tamanho = a.tamanho + 1;
		}
		return a;
	}
	
	int busca(ListaR R,float c){
		int resposta = fantasma;
		int i;
		for(i=1;i<=R.tamanho;i++){
			if(R.vetor[i] == c){
				resposta = i;
			}
		}
		return resposta;
	}       
	
	float obterElemento(ListaR X, int p){
		float elemento;
		if((p >= 1)&&(p < Maximo)){
		  elemento = X.vetor[p];	
		}
	    return elemento;
	}
	
	
	int obterTamanho(ListaR L){
		int x;
		x = L.tamanho;
		return x;
	}
	
	bool verificarVazia(ListaR Z){
		bool vazia = FALSE;
		if(Z.tamanho == 0){
			vazia = TRUE;
		}
		return vazia;
	}
	
	bool verificarCheia(ListaR Y){
		bool cheia = FALSE;
		if(Y.tamanho == Maximo-1){
			cheia = TRUE;
		}
		return cheia;
	}
	
	ListaR esvaziar(ListaR E){
		E.tamanho = 0;
		return E;
	}
	
	
	
	void mostrarLista(ListaR L){
	     int k, n;
	     n = L.tamanho;
	     if (n==0) printf(" \n lista vazia \n");
	     else { 
	            printf("\n"); 
	            for(k=1;k<=n;k++)printf(" %f ", L.vetor[k]);
	     }
	     printf("\n");
	}
	

