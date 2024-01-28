#include <stdio.h>
#include <stdlib.h>
typedef union docs{
char rg[10];
float cpf[10];
}Documentos;

typedef struct tipodados{
int meu_int;
float meu_float;
Documentos doc
}Dados;

int main(void){
Dados uniao;
printf("DIGITE OS DADOS");
scanf("%d %f", &uniao.meu_int, &uniao.meu_float);
printf("os dados informados: meu_int=%d meu float:%f");
return 0;
}