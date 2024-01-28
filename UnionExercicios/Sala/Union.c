#include <stdio.h>
#include <stdlib.h>
typedef union gen{
int mas;
int fem;
}Genero;

typedef struct pessoa{
char nome[50];
int idade;
Genero genero;
}Pessoa;

void dados_pessoa(Pessoa *p){
int opcao;
printf("digite o nome: ");
scanf("%s", p-> nome);
printf("digite a idade: ");
scanf("%d", &p-> idade);
printf("digite 1 para MASCULINO e 0 para FEMININO: ");
scanf("%d", &opcao); //se for diferente de 0 eh verdadeiro
if (opcao){
scanf("%d", p-> genero.mas);
}else{
scanf("%d", p-> genero.fem);
}
int main(void);{
Pessoa*pessoa=malloc(sizeof(Pessoa));
Pessoa uniao;
printf("DIGITE OS DADOS: ");
printf("nome: %s\n idade: %d\n genero: %d",pessoa->genero);
free(pessoa);
return 0;
};