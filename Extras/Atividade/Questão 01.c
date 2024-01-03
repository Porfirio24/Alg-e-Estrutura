#include <stdio.h>

int main()
{
    int vet[10];             // declarando o vetor
    int i, j, auxi;          // variaveis auxiliares
    for (i = 0; i < 10; i++) // preenchendo o vetor com valores de 0 a 9
    {
        vet[i] = i;
    }
    for (i = 0; i < 10; i++) // printando o vetor antes de ser invertido
    {
        printf("%d", vet[i]);
    }
    printf("\n\n");
    i = 0;                   // zerando a variavel i
    for (j = 9; j >= 4; j--) // implementando o algoritmo para inverter o vetor
    {
        auxi = vet[i];   // colocando o item do indice i do vetor para variavel auxi
        vet[i] = vet[j]; // pegando os ultimos intens do vetor e colocando nos primeiros
        vet[j] = auxi;   // como os primeiros tao sendo sobrepostos aqui estamos usando a aux
        i++;             // ingrementando o i para o proximo item do vetor
    }
    for (i = 0; i < 10; i++) // imprimir o vetor invertido
    {
        printf("%d", vet[i]);
    }
    return 0;
}