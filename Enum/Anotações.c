#include <stdio.h>
#define TRUE 0
#define FALSE 1
int main (void){
int resposta;
printf("voce gosta de algoritmos? \n 0- True \n 1- False\");
//o numero que o usuario digitar eh armazenado em resposta
scanf("%d", &resposta);
//comparaçao
if (resposta==TRUE){
printf("boa escolha \n");
}
else if(resposta==FALSE){
printf("que pena \n");
}
return 0;
}