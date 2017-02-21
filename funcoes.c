#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tipos.h"


void cadastrarAluno (Aluno *aluno[]);
void buscarCadastro (Aluno *aluno[]);
void imprimirCadastro(Aluno *aluno[]);
void ordenarCadastro(Aluno *aluno[]);
int buscarAluno(Aluno *aluno[],char raAux[]);
int removerCadastro(Aluno *aluno[],char raAux[]);


void cadastrarAluno (Aluno *aluno[]){



     int qtd=0,j,N1,N2,numeroDisciplinas;
     
     while (qtd<QTD_ALUNOS) {
     	
     	if (aluno[qtd]==NULL){
     		
     		break;
     		
     	}
     	qtd++;
     }
    
     aluno[qtd] =(Aluno*)malloc(sizeof(Aluno));
    

        printf("Digite o nome do aluno #%d: ",qtd+1);
        scanf("%s", aluno[qtd]->nomedoaluno);
        printf("Digire o ra do aluno #%d: ",qtd+1);
        scanf("%s",aluno[qtd]->ra);
        printf("Digite o periodo: ");
        scanf("%d",& aluno[qtd]->periodo);

        for(j=0; j<QTD_DICSIPLINAS; j++)
        {
            printf("Digite o nome da disciplina #%d: ",j+1);
            scanf("%s", aluno[qtd]->disciplinas[j].nomedadisciplina);
            printf("Digite o nome do professor(a): ");
            scanf("%s", aluno[qtd]->disciplinas[j].nomedoprofessor);
            printf("Digite a nota da P1: ");
            scanf("%f",& aluno[qtd]->disciplinas[j].p1);
            printf("Digite a nota da P2: ");
            scanf("%f",& aluno[qtd]->disciplinas[j].p2);
            printf("Dgite a nota A1: ");
            scanf("%f",& aluno[qtd]->disciplinas[j].a1);
            printf("Digite a nota A2: ");
            scanf("%f",& aluno[qtd]->disciplinas[j].a2);


            N1 = ((2*aluno[qtd]->disciplinas[j].p1)+aluno[qtd]->disciplinas[j].a1)/3;
            N2 = ((2*aluno[qtd]->disciplinas[j].p2)+aluno[qtd]->disciplinas[j].a2)/3;

            aluno[qtd]->disciplinas[j].media = (N1+N2)/2;

        }

    


}


void buscarCadastro(Aluno *aluno[])
{

    char ra[50];
    int i,j;

    printf("Digite o RA do Aluno: ");
    scanf("%s",ra);
    
    
    for (i=0;i<QTD_ALUNOS; i++)
    {
        if (aluno[i] != NULL) {
        

        if (strcmp(ra,aluno[i]->ra)==0)
        {
            printf("\nO nome do aluno #%d e %s \nSeu ra e %s \nEsta cursando o %d periodo \n ",i+1, aluno[i]->nomedoaluno, aluno[i]->ra, aluno[i]->periodo);
            for(j=0;j<QTD_DICSIPLINAS;j++){
            printf ("\nO nome da disciplina # %d e %s \nO nome do professor(a) da disciplina # %d e %s \n A nota da P1 e %f \nA nota da P2 e %f \nA  Media Final e %f\n",j+1,aluno[i]->disciplinas[j].nomedadisciplina,j+1,aluno[i]->disciplinas[j].nomedoprofessor,aluno[i]->disciplinas[j].p1,aluno[i]->disciplinas[j].p2,aluno[i]->disciplinas[j].media);
            }
            return;
        }
    }

    }

    printf("\nRA nao cadastrado\n");
    
}






void imprimirCadastro(Aluno *aluno[])
{


    int i,j;


        for (i=0;(i<QTD_ALUNOS) ;i++){
        
         if(aluno[i] != NULL){
         
        printf("\nO nome do aluno #%d e %s \nSeu ra e %s \nEsta cursando o %d periodo \n ",i+1, aluno[i]->nomedoaluno, aluno[i]->ra, aluno[i]->periodo);


        for (j=0; j<QTD_DICSIPLINAS; j++)
        {

            printf ("\nO nome da disciplina # %d e %s \nO nome do professor(a) da disciplina # %d e %s \n A nota da P1 e %f \nA nota da P2 e %f \nA  Media Final e %f\n",j+1,aluno[i]->disciplinas[j].nomedadisciplina,j+1,aluno[i]->disciplinas[j].nomedoprofessor,aluno[i]->disciplinas[j].p1,aluno[i]->disciplinas[j].p2,aluno[i]->disciplinas[j].media);



        }
}
}

    

}

void ordenarCadastro(Aluno *aluno[]){
	
	int i,j;
	Aluno *temp;
	
	for(i=0;i<QTD_ALUNOS;i++){
		
		for (j=0; j < (QTD_ALUNOS-1); j++){
			
		if (aluno[j] && aluno[j+1] != NULL){
			
		if ( strcmp (aluno[j]->nomedoaluno,aluno[j+1]->nomedoaluno)>0 ){
			
			temp = aluno[j];
			aluno[j] = aluno[j+1];
			aluno[j+1] = temp;
			
		}
}
	}
}
} 

int buscarAluno(Aluno *aluno[],char raAux[]){
	
	int i,ret=-1;
	
	for (i=0;i<QTD_ALUNOS;i++) {
	if (aluno[i] != NULL){
	
	 if (strcmp(aluno[i]->ra,raAux)==0)	{
	 	ret=i;
	 	break;
	 }
		
}
		
	}
	
return (ret);	
	
}









 int removerCadastro(Aluno *aluno[],char raAux[]){
	
	int j = buscarAluno (aluno,raAux);
	int x=0;
	
	if ( j != -1){
	
	
		free (aluno[j]);
		aluno[j] = NULL;
		x=-1;
		
	
}
	return(x);	
	
}

