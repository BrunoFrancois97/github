#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED


#include "tipos.h"
#define QTD_ALUNOS 200
#define QTD_DICSIPLINAS 2
typedef struct _disciplina
{

    char nomedadisciplina[50];
    char nomedoprofessor[50];
    float p1,p2,a1,a2,media;

} Disciplina;



typedef struct _aluno
{

    char nomedoaluno[50];
    char ra[50];
    int periodo ;
    Disciplina disciplinas[QTD_DICSIPLINAS];


} Aluno;

void cadastrarAluno (Aluno *aluno[]);
void buscarCadastro (Aluno *aluno[]);
void imprimirCadastro(Aluno *aluno[]);
void ordenarCadastro(Aluno *aluno[]);
int buscarAluno(Aluno *aluno[],char raAux[]);
int removerCadastro(Aluno *aluno[],char raAux[]);


#endif // TIPOS_H_INCLUDED


