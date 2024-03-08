#include<stdio.h>
#include<stdlib.h>

typedef struct alunos{
char nome[50];
float notas[3];

}Alunos;

int main(void){
Alunos alunos;
int qtd, i, j;
FILE* saida;

printf("Quantos alunos deseja cadastra?\n");
scanf("%d", &qtd);

saida = fopen("saida alunos.txt", "w");

if (saida== NULL){
printf("erro ao criar arquivo\n");
return 1;

}

 for (i = 0; i < qtd; i++) {
        printf("Qual o nome do aluno %d?\n", i + 1);
        scanf("%s", alunos.nome);

        for (j = 0; j < 3; j++) {
            printf("Digite a nota %d:\n", j + 1);
            scanf("%f", &alunos.notas[j]);
        }

        fprintf(saida, "%s %.2f %.2f %.2f\n", alunos.nome, alunos.notas[0], alunos.notas[1], alunos.notas[2]);
    }

    fclose(saida);
    return 0;
}
