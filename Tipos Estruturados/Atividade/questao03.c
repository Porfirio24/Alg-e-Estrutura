#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float base;
    float altura;
} Retangulo;

typedef struct {
    float raio;
} Circulo;

Retangulo* ret_circunscrito(Circulo* c, float h) {
    if (c == NULL || h <= 0) {
        return NULL; 
    }

    Retangulo* ret = (Retangulo*)malloc(sizeof(Retangulo));

    if (ret == NULL) {
        return NULL; 
    }

    ret->base = sqrt(2) * 2 * c->raio; 

    ret->altura = h;

    return ret;
}

Circulo* circ_interno(Retangulo* r) {
    if (r == NULL || r->base <= 0 || r->altura <= 0) {
        return NULL; 
    }

    Circulo* circ = (Circulo*)malloc(sizeof(Circulo));

    if (circ == NULL) {
        return NULL; 
    }

    circ->raio = fmin(r->base, r->altura) / 2;

    return circ;
}

void lerEntradas(Circulo* c, Retangulo* r) {
    printf("Digite o raio do círculo: ");
    scanf("%f", &c->raio);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &r->altura);
}

int main() {
    Circulo meuCirculo;
    Retangulo meuRetangulo;

    lerEntradas(&meuCirculo, &meuRetangulo);

    Retangulo* retanguloCircunscrito = ret_circunscrito(&meuCirculo, meuRetangulo.altura);

    if (retanguloCircunscrito != NULL) {
        printf("Retângulo circunscrito: Base = %.2f, Altura = %.2f\n", retanguloCircunscrito->base, retanguloCircunscrito->altura);

        Circulo* circuloInterno = circ_interno(retanguloCircunscrito);

        if (circuloInterno != NULL) {
            printf("Círculo interno: Raio = %.2f\n", circuloInterno->raio);

            free(circuloInterno);
        } else {
            printf("Erro ao criar o círculo interno.\n");
        }

        free(retanguloCircunscrito);
    } else {
        printf("Erro ao criar o retângulo circunscrito.\n");
    }

    return 0;
}
