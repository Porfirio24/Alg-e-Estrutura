/*o codigo armazena o ultimo dado informado em cada uniao, além de usar
menos memorias*/
#include <stdio.h>
#include <stdlib.h>

typedef union docs{
char rg[10];
float cpf[12];
}Documentos;

typedef struct pessoa{
int nome;
float idade;
Documentos doc;
}Pessoa;

void dados_pessoa(Pessoa *p){
 int opcao;
 printf("digite o nome:");
 scanf("%[^\n]", p-> nome);
 printf("digite a idade");
 scanf("%d", &p-> idade);
 printf("digite 1 para CPF e 0 para RG");
 scanf("%d", &opcao); //se for diferente de 0 é verdadeiro
 if (opcao){
 scanf("%[^\n]", p-> doc.cpf);
}else{
scanf("%[^\n]", p-> doc.rg);
}
int main(void);{
Pessoa*pessoa=malloc(sizeof(Pessoa));
Pessoa uniao;

printf("DIGITE OS DADOS: ");
printf("cpf: %d \n rg: %d", pessoa->doc.cpf, pessoa);

free(pessoa);
return 0;
}
