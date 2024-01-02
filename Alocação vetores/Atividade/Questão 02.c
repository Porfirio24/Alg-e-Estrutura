#include <stdio.h>
#include <stdlib.h>

#define ALUNOS 10

void saida(char *gabarito, char **alunos, int *n)
{
    float nota = 0;
    float acertos = 0;
    float aprovados = 0;
    for (int i = 0; i < ALUNOS; i++)
    {
        nota = 0;
        acertos = 0;
        for (int j = 0; j < (*n); j++)
        {
            if (alunos[i][j] == gabarito[j])
            {
                acertos++;
            }
        }
        nota = acertos * 10 / (*n);
        printf("Aluno %d\nNota: %.2f\n", i + 1, nota);
        if (nota >= 6)
        {
            aprovados++;
        }
    }
    printf("\n\nPorcentagem de aprovados: %% %.2f", (float)(aprovados / ALUNOS) * 100);
}

int main()
{
    int n = 0;
    int i;
    int j;
    printf("Insira a quantidade de questoes: ");
    scanf("%d", &n);
    char *gabarito = (char *)malloc(n * sizeof(char));
    char **alunos = (char **)malloc(ALUNOS * sizeof(char *));
    for (i = 0; i < ALUNOS; i++)
    {
        alunos[i] = (char *)malloc(n * sizeof(char));
    }
    for (i = 0; i < n; i++)
    {
        printf("Insira a resposta da %dº questao: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }
    for (i = 0; i < ALUNOS; i++)
    {
        printf("Insira as respostas do %dº aluno\n", i + 1);
        for (j = 0; j < n; j++)
        {
            printf("Insira a resposta da %dº questao: ", j + 1);
            scanf(" %c", &alunos[i][j]);
        }
    }
    saida(gabarito, alunos, &n);
    free(gabarito);
    for (i = 0; i < ALUNOS; i++)
    {
        free(alunos[i]);
    }
    free(alunos);
    return 0;
}