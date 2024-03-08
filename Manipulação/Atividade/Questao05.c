#include<stdio.h>
#include<stdlib.h>

typedef struct frutas{
char nome[30];
float preco;

}Frutas;

int main (){
Frutas frutas;
FILE * saida;

saida = fopen("Frutas.txt", "w");

if (saida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    printf("CADASTRO DAS FRUTAS:\n");
    printf("Se deseja encerrar o cadastro, digite a palavra 'sair'\n");


    while (1) {
        printf("Digite o nome da fruta %d:\n");
        scanf("%s", frutas.nome);

        if (strcmp(frutas.nome, "sair") == 0) {
            break;
        }

        printf("Digite o preco da fruta %d:\n");
        scanf("%f", &frutas.preco);

        fprintf(saida, "%s, %.2f\n", frutas.nome, frutas.preco);
        printf("Fruta cadastrada com sucesso!\n");

    }
     printf("Cadastro de frutas encerrado!\n");

    fclose(saida);

    return 0;
}
