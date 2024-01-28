#include <stdio.h>
#include <stdlib.h>

char* inicializa_vetor_char(int tamanho);

void contador_mulheres(char sexo, char opiniao, int *qtd_mulheres, int *mulheres_gostaram);

void contador_homens(char sexo, char opiniao, int *qtd_homens, int *homens_nao_gostaram);

void isAlloc(char* vetor){
    if (vetor == NULL){
        printf("Erro na alocacao de memoria.\n");
        exit(EXIT_FAILURE);
    }
}

int main(void){
    char *sexo; 
    char *opiniao;
    int num_entrevistados;
    int qtd_mulheres = 0, qtd_homens = 0;
    int mulheres_gostaram = 0, homens_nao_gostaram = 0;  

    printf("Informe o numero de pessoas entrevistadas: ");
    scanf("%d", &num_entrevistados);

    sexo = inicializa_vetor_char(num_entrevistados);
    isAlloc(sexo);
    opiniao = inicializa_vetor_char(num_entrevistados);
    isAlloc(opiniao);

    for(int pessoa = 0; pessoa < num_entrevistados; pessoa++){
        char resposta;
        printf("Informe o seu sexo (F/M): ");
        scanf(" %c", &resposta);
        sexo[pessoa] = resposta;

        printf("Voce gostou do produto? (S/N): ");
        scanf(" %c", &resposta);
        opiniao[pessoa] = resposta;

        contador_mulheres(sexo[pessoa], opiniao[pessoa], &qtd_mulheres, &mulheres_gostaram);
        contador_homens(sexo[pessoa], opiniao[pessoa], &qtd_homens, &homens_nao_gostaram);
    }

    float porcentagem_mulheres = 0.0;
    float porcentagem_homens = 0.0;

    if (qtd_mulheres > 0) {
        porcentagem_mulheres = (mulheres_gostaram / (float)qtd_mulheres) * 100;
    }

    if (qtd_homens > 0) {
        porcentagem_homens = (homens_nao_gostaram / (float)qtd_homens) * 100;
    }

    printf("A porcentagem de mulheres que gostaram do produto e de %.2f%% \n", porcentagem_mulheres);
    printf("A porcentagem de homens que não gostaram do produto e de %.2f%% \n", porcentagem_homens);

    free(sexo);
    free(opiniao);
    return 0;
}      

char* inicializa_vetor_char(int tamanho){
    return (char *) malloc (tamanho * sizeof(char));
}

void contador_mulheres(char sexo, char opiniao, int *qtd_mulheres, int *mulheres_gostaram){
    if(sexo == 'F' || sexo == 'f'){
        (*qtd_mulheres)++;
        if (opiniao == 'S' || opiniao == 's'){
            (*mulheres_gostaram)++;
        }
    }
}

void contador_homens(char sexo, char opiniao, int *qtd_homens, int *homens_nao_gostaram){
    if(sexo == 'M' || sexo == 'm'){
        (*qtd_homens)++;
        if (opiniao == 'N' || opiniao == 'n'){
            (*homens_nao_gostaram)++;
        }
    }
}
