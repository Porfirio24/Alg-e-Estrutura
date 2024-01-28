#include <stdio.h>
#include <stdlib.h>

#define MAX_VAGAS 10

typedef struct aluno {
    int matricula;
    char nome[80];
    char turma;
    float notas[3];
    char disciplina[15];
    float media;
} Aluno;

void cadastraAluno(Aluno *aluno) {
    printf("Informe a matricula: ");
    scanf("%d", &aluno->matricula);
    getchar();
    printf("Informe o nome do aluno: ");
    scanf("%[^\n]", aluno->nome);
    getchar();
    printf("Informe a disciplina: ");
    scanf("%[^\n]", aluno->disciplina);
    getchar();
    printf("Informe a turma: ");
    scanf(" %c", &aluno->turma);
    getchar();
}

void lancaNotas(Aluno *aluno) {
    float soma = 0;
    printf("Informe as notas do aluno:\n");
    for (int j = 0; j < 3; j++) {
        printf("Nota #%d: ", j + 1);
        scanf("%f", &aluno->notas[j]);
        soma += aluno->notas[j];
    }
    aluno->media = soma / 3;
}

void imprimeAluno(Aluno *aluno) {
    printf("Matricula: %d\nNome do aluno: %s\nDisciplina: %s\nTurma: %c\n", aluno->matricula, aluno->nome,
           aluno->disciplina, aluno->turma);
    printf("Notas: %.2f %.2f %.2f\n", aluno->notas[0], aluno->notas[1], aluno->notas[2]);
    printf("Media do aluno: %.2f\n\n", aluno->media);
}

void imprimeTurma(int n, Aluno *alunos, char turma) {
    printf("=== Alunos da turma %c ===\n", turma);
    for (int i = 0; i < n; i++) {
        if (alunos[i].turma == turma) {
            imprimeAluno(&alunos[i]);
        }
    }
}

void imprimeTurmaAprovados(int n, Aluno *alunos, char turma) {
    printf("=== Alunos aprovados da turma %c ===\n", turma);
    for (int i = 0; i < n; i++) {
        if (alunos[i].turma == turma && alunos[i].media >= 7.0) {
            imprimeAluno(&alunos[i]);
        }
    }
}

int main(void) {
    int n;
    char turma;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);
    getchar();

    Aluno *alunos = malloc(n * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro de alocação de memória!");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        cadastraAluno(&alunos[i]);
        lancaNotas(&alunos[i]);
    }

    printf("=== DADOS CADASTRADOS ===\n");
    for (int i = 0; i < n; i++) {
        printf("Aluno #%d:\n", i + 1);
        imprimeAluno(&alunos[i]);
    }

    printf("Deseja imprimir os dados de qual turma? ");
    scanf(" %c", &turma);

    imprimeTurma(n, alunos, turma);
    imprimeTurmaAprovados(n, alunos, turma);

    free(alunos);

    return 0;
}