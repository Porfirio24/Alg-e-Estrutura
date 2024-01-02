#include <stdio.h>
#include <stdlib.h>
//Definindo a estrutura de aluno
struct aluno{

char nome[20]; // 20bytes
int idade; // 4 bytes
int matricula; // 4 bytes
char email[50]; // 50 bytes
};
// . = operador de acesso
//informações de aluno
//Alocacão estatica
int main(void){
struct aluno estudante;
printf("Digite o nome do aluno\n");
scanf(" %[^\n]", estudante.nome);
printf("Digite sua idade");
scanf("%d", &estudante.idade);
printf("Digite sua matricula\n");
scanf("%d", &estudante.matricula);
printf("Digite o Email\n");
scanf(" %[^\n]", estudante.email);
return 0;
}
//ponteiro para a struct aluno
int main(void){
 struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));

return 0;
}
//alocação dinamica
int main(void){
struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
if (estudante == NULL){
exit(1);
}
struct aluno estudante;
printf("Digite o nome do aluno\n");
scanf(" %[^\n]", estudante->nome);
printf("Digite sua idade");
scanf("%d", &estudante->idade);
printf("Digite sua matricula\n");
scanf("%d", &estudante->matricula);
printf("Digite o Email\n");
scanf(" %[^\n]", estudante->email);
return 0;

//função preenche
int main(void){
struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
if (estudante == NULL){
exit(1);
}
preenche(estudante);
free (estudante);
return 0;
}
//função imprime
int main(void){
struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
if (estudante == NULL){
exit(1);
}
preenche(estudante);
imprime(estudante);
free (estudante);
return 0;
}
void imprime(struct aluno * estudante){
printf("Nome: %s\n Idade: %d \n Metricula %D Email: %s", estudante->nome,estudante->idade,estudante->matricula,estudante->email);
};

// /* typedef para renomear a struct
typedef struct aluno{

char nome[20];
int idade;
int matricula;
char email[50];
} Aluno;