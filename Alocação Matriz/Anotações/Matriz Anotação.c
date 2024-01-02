//Declaração de matriz dinamicamente
#include<stdio.h>
#include<stdlib.h>

int main(){
int linhas = 3, colunas =  3, i, j;
//alocando vetor ponteiro
int **matriz = (int**) malloc(linhas * sizeof(int*));
//alocando cada linha da matriz
for (i =0; i < linhas; i++) {
matriz[i] = (int*) malloc(colunas *sizeof(int));
}
//Liberando a memoria alocada
for (i =0; i < linhas; i++) {
free (matriz[i]);
}
free (matriz);
return 0;
}