#include <stdio.h>

int main()
{
  int N_ant, N_prox, N, N_atual;
N_ant = N_atual = 1;
for (int i = 1; i<= N; i++)
{
N_prox = N_ant + N_atual;
N_ant = N_atual;
N_atual = N_prox;
}
printf("Fim do laco!\n");
return 0;
//correção do 0 e do ; no return e c 
// ; faltando nos parentezes
// valor atribuido a variavel em linha errada