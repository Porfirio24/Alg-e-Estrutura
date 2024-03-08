#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char linha[100];
    int ve[10];
    FILE *arq1, *arq2;
    int e = 0;
    float media = 0;

    // abre o arquivo de entrada para leitura
    arq1 = fopen("entre_q2.txt", "r");
    if (arq1 == NULL)
    {
        printf("arquivo criado\n");
        exit(1);
    }

    // abre o arquivo de saida para escrita
    arq2 = fopen("sai_q2.txt", "w");
    if (arq2 == NULL)
    {
        printf("erro\n");
        exit(1);
    }
    // ler entrada dos dados do arquivo
    while (fgets(linha, 100, arq1) != NULL)
    {
        sscanf(linha, "%d", &ve[e]);

        media += ve[e];

        e++;
    }
    int menor = ve[0];
    int maior = ve[0];

    for (e = 0; e < 10; e++)
    {

        if (ve[e] < menor)
            menor = ve[e];

        if (ve[e] > maior)
            maior = ve[e];
    }
    fprintf(arq2, "menor elemento: %d\n maior elemento: %d\n media dos elemento %f", menor, maior, media / 10);
    fclose(arq1);
    printf("%d maioor", maior);
    return 0;
}