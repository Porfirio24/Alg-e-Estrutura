#include <stdio.h>
#include <stdlib.h>

typedef struct ingresso {
    float preco;
    char local[50];
    char atracao[50];
} Ingresso;

void preenche(Ingresso *i) {
    printf("Informe o preco: ");
    scanf("%f", &i->preco);
    printf("Informe o local: ");
    scanf(" %[^\n]", i->local);
    printf("Informe a atracao: ");
    scanf(" %[^\n]", i->atracao);
}

void imprime(Ingresso *i) {
    printf("Preco: %.2f\nLocal: %s\nAtracao: %s\n", i->preco, i->local, i->atracao);
}

void altera_preco(Ingresso *i, float valor) {
    i->preco = valor;
}

void imprime_menor_maior_preco(int n, Ingresso *vet) {
    int indice_menor = 0, indice_maior = 0;

    for (int i = 1; i < n; i++) {
        if (vet[i].preco < vet[indice_menor].preco) {
            indice_menor = i;
        }

        if (vet[i].preco > vet[indice_maior].preco) {
            indice_maior = i;
        }
    }

    printf("Evento de ingresso mais barato:\n");
    imprime(&vet[indice_menor]);

    printf("\nEvento de ingresso mais caro:\n");
    imprime(&vet[indice_maior]);
}

int main() {
    int n;
    printf("Quantos ingressos deseja cadastrar: ");
    scanf("%d", &n);

    Ingresso *ingressos = malloc(n * sizeof(Ingresso));
    if (ingressos == NULL) {
        printf("Erro de alocação de memória!");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        printf("\n--- Cadastro de Ingresso %d ---\n", i + 1);
        preenche(&ingressos[i]);
    }

    printf("\n--- Ingressos Cadastrados ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nIngresso %d:\n", i + 1);
        imprime(&ingressos[i]);
    }

    int indice_alteracao;
    float novo_preco;
    printf("\nInforme o numero do ingresso que deseja alterar o preco: ");
    scanf("%d", &indice_alteracao);
    printf("Informe o novo preco: ");
    scanf("%f", &novo_preco);
    altera_preco(&ingressos[indice_alteracao - 1], novo_preco);

    printf("\n--- Ingresso Alterado ---\n");
    imprime(&ingressos[indice_alteracao - 1]);

    imprime_menor_maior_preco(n, ingressos);

    free(ingressos);

    return 0;
}
