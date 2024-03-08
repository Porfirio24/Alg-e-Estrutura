#include "aluno.h"//reconhecer as funções que estão nesse arquivo 
#include<stdlib.h>
#include<stdio.h>

struct aluno{
char nome[20];
int matricula;
float Ira;
};

Aluno *recebe_dados(void){
Aluno *estudante = (Aluno*) malloc(sizeof(Aluno));

if (estudante==NULL){
printf("erro");
exit(1);
}

printf("Informe o nome do aluno\n");
scanf("%s", estudante-> nome);
printf("Informe a matricula\n");
scanf("%d", &estudante->matricula);
printf("Informe o Ira do aluno");
scanf("%f", &estudante-> Ira);

return estudante;
}

void imprime(Aluno*aluno){
printf("Dados do aluno\n Nome:%s\n");
printf("Nome:\n", aluno->nome);
printf("Matricula:\n", aluno->matricula);
printf("Ira:\n", aluno->Ira);

}