#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Funcionario {
    char nome[20];
    float salario;
    int identificador;
    char cargo[30];
};

void preencheFuncionario(struct Funcionario *funcionario) {
    printf("Digite o nome do funcionário: ");
    scanf(" %[^\n]", funcionario->nome);
    printf("Digite o salário: ");
    scanf("%f", &funcionario->salario);
    printf("Digite o identificador: ");
    scanf("%d", &funcionario->identificador);
    printf("Digite o cargo: ");
    scanf(" %[^\n]", funcionario->cargo);
}

void imprimeFuncionario(struct Funcionario *funcionario) {
    printf("Funcionário: %s\n", funcionario->nome);
    printf("Salário: %.2f\n", funcionario->salario);
    printf("Identificador: %d\n", funcionario->identificador);
    printf("Cargo: %s\n", funcionario->cargo);
    printf("\n");
}

void alteraSalario(struct Funcionario *funcionario) {
    printf("Digite o novo salário para %s: ", funcionario->nome);
    scanf("%f", &funcionario->salario);
    printf("Salário atualizado para %.2f\n", funcionario->salario);
}

void mostraMenorEMaior(struct Funcionario funcionarios[], int tamanho) {
    int i, indiceMaior = 0, indiceMenor = 0;

    for (i = 1; i < tamanho; i++) {
        if (funcionarios[i].salario > funcionarios[indiceMaior].salario) {
            indiceMaior = i;
        }
        if (funcionarios[i].salario < funcionarios[indiceMenor].salario) {
            indiceMenor = i;
        }
    }

    printf("Funcionário com maior salário:\n");
    imprimeFuncionario(&funcionarios[indiceMaior]);

    printf("Funcionário com menor salário:\n");
    imprimeFuncionario(&funcionarios[indiceMenor]);
}

int main(void) {
    setlocale(LC_ALL, "portuguese");

    int numFuncionarios, n;
    printf("Digite o número de funcionários: ");
    scanf("%d", &numFuncionarios);

    struct Funcionario *funcionarios = (struct Funcionario *)malloc(numFuncionarios * sizeof(struct Funcionario));

    if (funcionarios == NULL) {
        printf("Erro na alocação de memória!\n");
        exit(1);
    }

    for (n = 0; n < numFuncionarios; n++) {
        printf("Funcionário %d:\n", n + 1);
        preencheFuncionario(&funcionarios[n]);
    }

    for (n = 0; n < numFuncionarios; n++) {
        printf("Detalhes do Funcionário %d:\n", n + 1);
        imprimeFuncionario(&funcionarios[n]);

        char resposta;
        printf("Deseja alterar o salário deste funcionário? (S/N): ");
        scanf(" %c", &resposta);
        
        if (resposta == 'S' || resposta == 's') {
            alteraSalario(&funcionarios[n]);
        }
    }

    mostraMenorEMaior(funcionarios, numFuncionarios);

    free(funcionarios);
    return 0;
}
