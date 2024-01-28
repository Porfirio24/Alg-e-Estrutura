#include
#define TRUE 0
enum 2
#define FALSE 1
//enum nome_da_enum
typedef enum bool{
true, //assume o valor 0
false //inicia a contagem sequencial, nesse caso seria o 1
}Bool;
int main (void){
Bool resposta:
printf("voce gosta de algoritmos? \n 0- True \n 1- False\
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
