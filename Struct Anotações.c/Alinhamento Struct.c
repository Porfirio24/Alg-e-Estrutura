#include<stdio.h>
#include <stdlib.h>

//exemplo de alinhamento de estrutura

typedef struct disciplina{
char nome[20];
float nota;
int codigo;
}Disciplina;

typedef struct aluno {
char nome[20];
int idade;
int matricula;
Disciplina * materias;//vetor de disciplinas
}Aluno;
//alocar memoria para o vetor de 2 disciplinas
int main(void){
Aluno *aluno=(Aluno*) malloc(sizeof(Aluno));
if (aluno == NULL){
exit(1);
}
//Alocando memoria para o vetor de disciplinas
aluno->materias=(Disciplina*) malloc(2*sizeof(Disciplina));
if(aluno->materias==NULL){
exit(1);
}
printf("informe os dados do aluno: nome, idade e matricula\n");
scanf("%[^\n]", aluno->nome);
scanf("%d %d", &aluno->idade, &aluno->matricula);
//cadastro de disciplinas
int index;
for(index=0; index<2; index++){
printf("Cadastro da disciplina %d", index+1);
scanf(" %[^\n]", aluno->materias[index].nome);
scanf("%d", &aluno->materias[index].codigo);
scanf("%d", &aluno->materias[index].nota);
}
return 0;
}