#include "tipos.h"
#include <stdio.h>

int main()
{
    
    int a;
    char valorDigitado;
    Aluno *aluno[QTD_ALUNOS];
    char raAux[50];
    
    for (a=0;a<QTD_ALUNOS;a++){
     
	 	aluno[a] = NULL;
    	
    }



    do
    {
        printf("Escolha uma das seguintes opcoes: \n1 : Cadastro do Aluno\n \n2 : Impressao de dados\n \n3 : Busca\n \n4 : Ordenar\n \n5 : Remover\n \n6 : Sair do Programa\n ");
        scanf("%c",&valorDigitado);

        switch (valorDigitado)
        {

        case '1':
            
           
            cadastrarAluno(aluno);
            
            break;

        case '2':

            imprimirCadastro(aluno);

            break;

        case '3':

            buscarCadastro(aluno);
            break;
            
        case '4':
		    
			ordenarCadastro(aluno);
			break;    
            
        case '5':
		    
		    
		    printf("Digite o RA do aluno a ser removido : ");
		    scanf("%s",raAux);
		    int x=removerCadastro(aluno,raAux);
		    if (x == 0) {
		    	printf("\nAluno nao encontrado!!!\n");
		    }
		    else {
		    	printf("\nAluno removido com sucesso!!\n");
		    }
		
		
		    break;
		    
            
        case '6':

            printf("\n FIM!");
             
            break;


        }



    }
    while (valorDigitado != '6');







    return 0;
}




