#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int alunos = 10;
    int quant_questoes;

    printf("Informe a quantidade de questoes da avaliacao:\n");
    scanf("%d", &quant_questoes);

    char *gabarito = (char *)calloc((quant_questoes + 1), sizeof(char));
    if (gabarito == NULL) {
        printf("Erro de alocacao.\n");
        exit(EXIT_FAILURE);
    }

    printf("Gabarito da prova:\n");
    scanf("%s", gabarito);

    if (strlen(gabarito) != quant_questoes) {
        printf("O numero de caracteres do gabarito nao corresponde a quantidade de questoes!\n");
        exit(EXIT_FAILURE);
    }

    float aprovados = 0.0;

    for (int contador = 0; contador < alunos; contador++) {
        char *resposta = (char *)calloc((quant_questoes + 1), sizeof(char));
        if (resposta == NULL) {
            printf("Erro de alocacao.\n");
            exit(EXIT_FAILURE);
        }

        printf("Respostas do %d aluno:\n", contador + 1);
        scanf("%s", resposta);

        if (strlen(resposta) != quant_questoes) {
            printf("O numero de caracteres das respostas do aluno %d nao correspondem a quantidade de questoes.\n", contador + 1);
            exit(EXIT_FAILURE);
        }

        float nota = 0.0;

        for (int contador2 = 0; contador2 < quant_questoes; contador2++) {
            if (resposta[contador2] == gabarito[contador2]) {
                nota += 10.0 / quant_questoes;
            }
        }

        printf("A nota obtida do aluno %d e %.2f\n", contador + 1, nota);

        if (nota >= 6.0) {
            aprovados++;
        }

        free(resposta);
    }

    float porcent_aprov = (aprovados / alunos) * 100.0;
    printf("A porcentagem de aprovacao foi de %.2f%%\n", porcent_aprov);

    free(gabarito);

    return 0;
}
