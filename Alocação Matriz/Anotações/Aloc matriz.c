#include <stdio.h>
#include <stdlib.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    // Alocando a matriz dinamicamente
    int **matriz = (int **)malloc(LINHAS * sizeof(int *));
    for (int i = 0; i < LINHAS; i++) {
        matriz[i] = (int *)malloc(COLUNAS * sizeof(int));
    }

    // Preenchendo a matriz com os valores dos índices
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = i * LINHAS + j;
        }
    }

    // Imprimindo a matriz
    printf("Matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberando a memória alocada
    for (int i = 0; i < LINHAS; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}