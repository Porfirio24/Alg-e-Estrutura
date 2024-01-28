#include<stdlib.h>
#include<string.h>
#include<stdlib.h>

typedef union tipo{
char alimento[20];
char bebida[20];
char eletronico[20];
}Tipo;

typedef struct produto{
char nome[50];
float preco;
Tipo tipo;
}Produto;


int main(void){

Produto produto;
int opcao;

printf("===cadastro do Produto===\n");
printf("Digite o tipo do produto:\n1-Alimento\n2-Bebidas\n3-Eletronico\n");
scanf("%d", &opcao);

printf("Digite o nome do produto:\n");
scanf(" %[^\n]", produto.nome);

printf("Digite o valor do produto:\n");
scanf("%f", &produto.preco);

 
 printf("\n===Dados do produto===\n");
 printf("Nome: %s\nPreco: R$%.2f\n", produto.nome, produto.preco);

 switch (opcao)
 {
 case 1: 
 printf("Tipo: Alimento");
    break;
 
 case 2:
 printf("Tipo: Bebida");
 break;

 case 3:
 printf("Tipo: Eletronico");
 break;

 }
 
    return 0;
}