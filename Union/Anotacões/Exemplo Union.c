#include <stdio.h>
//Pode usar typerdef igual a struct
union tipodados{
int meu_int;
float meu_float;
}Dados;

int main(void){
Dados uniao;
printf("Digite os dados: \n");
scanf("%d %f", &uniao.meu_int, &uniao. meu_float);
printf("Os dados informados: meu_int = %d meu_float= f", uniao.meu_int, uniao.meu_float);
return 0;
}
// O codigo armazena o ultimo dado informado

typedef union documentos{
char rg[15];
char cpf[15];
}Documentos;
//serve pra quando o pedem ou o cpf ou o rg,então qualquer um dos dois podem servir, então automaticamente o ultimo dado substitui o primeiro
typedef struct pessoas{
char nome[20];
int idade;
Documentos doc;
}pessoa;
// Lemrar de adicionar no exemplo citado em sala de aula 