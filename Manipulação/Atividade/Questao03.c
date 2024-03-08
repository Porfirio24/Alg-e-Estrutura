#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario
{
    int id;
    char nome[50];
    float salario;

} Funcionario;

int main()
{
    Funcionario funcionario;
    FILE *saida;
    char arquivo[50];

    printf("informe o arquivo\n");
    scanf("%s", arquivo);

    saida = fopen(arquivo, "w");
    if (saida == NULL)
    {

        printf("erro ao criar arquivo");
        return 1;
    }
    printf("===Dados dos Funcionarios==\n");
    printf("Difite seu Nome\n");
    scanf("%s", funcionario.nome);

    printf("Digite seu Id\n");
    scanf("%d", &funcionario.id);

    printf("Informe seu Salario\n");
    scanf("%f", &funcionario.salario);

    fprintf(saida, "%s, %d, %2.f", funcionario.nome, funcionario.id, funcionario.salario);
    fclose(saida);

    return 0;
}