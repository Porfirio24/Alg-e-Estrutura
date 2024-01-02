#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Insira o total de entrevistados: ");
    int n;
    scanf("%d", &n);
    char *sex = (char *)malloc(n * sizeof(char));
    int *gostaram = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Qual o sexo da %dº pessoa (M/F): ", i + 1);
        scanf(" %c", &sex[i]);
        printf("A pessoa gostou ou nao? (1 - Gostou) (0 - Nao)");
        scanf("%d", &gostaram[i]);
    }
    float fa = 0;
    float mulheres = 0;
    for (int i = 0; i < n; i++)
    {
        if (sex[i] == 'F')
        {
            mulheres++;
            if (gostaram[i] == 1)
            {
                fa++;
            }
        }
    }
    float mn = 0;
    float homens = 0;
    for (int i = 0; i < n; i++)
    {
        if (sex[i] == 'M')
        {
            homens++;
            if (gostaram[i] == 0)
            {
                mn++;
            }
        }
    }
    if (mulheres > 0)
    {
        float pmg = (fa / mulheres) * 100;
        printf("Porcentagem de mulheres que gostaram do produto: %%%.2f\n", pmg);
    }
    if (homens > 0)
    {
        float hmn = ((mn / homens) * 100);
        printf("Porcentagem de homens que nao gostaram do produto: %%%.2f\n", hmn);
    }

    return 0;
}