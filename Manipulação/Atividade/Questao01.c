#include <stdio.h>

int main() {
    FILE *entrada, *saida;
    char nome[50];
    float nota1, nota2, nota3, media;

    // Abre o arquivo de entrada para leitura
    entrada = fopen("entrada_q1.txt", "r");
    saida = fopen("saida_q1.txt", "w");

    // Verifica se o arquivo foi aberto com sucesso
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Verifica se o arquivo foi aberto com sucesso
    if (saida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        fclose(entrada); // Fecha o arquivo de entrada
        return 1; // Encerra o programa com código de erro
    }

    // Lê dados do arquivo de entrada até o final do arquivo
    while (fscanf(entrada, "%s\t%f\t%f\t%f", nome, &nota1, &nota2, &nota3) != EOF) {
        // Calcula a média
        media = (nota1 + nota2 + nota3) /3;

        // Escreve no arquivo de saída
        fprintf(saida, "%s\t%.2f\t%s\n", nome, media, (media >= 7.0) ? "Aprovado" : "Reprovado");
    }

    // Fecha os arquivos
    fclose(entrada);
    fclose(saida);

    printf("Processamento concluído. Verifique o arquivo 'saida_q3.txt'.\n");

    return 0; // Programa executado com sucesso
}
