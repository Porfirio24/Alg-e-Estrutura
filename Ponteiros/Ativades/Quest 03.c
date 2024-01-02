#include <stdio.h>

int main(void){
    
    int a, b, c, d; //declara variaveis
    int *p1; // declara um ponteiro
    int *p2 = &a; //declara o ponteiro p2 e aponta "a"
    int *p3 = &c; //declara o ponteiro p3 e aponta ele pra "c"
    p1 = p2; // p1 recebe o valor de p2
    *p2 = 10; // atualiza o valor de p2 para 10
    b = 20; // "b" recebe 20
    int **pp; // declara um ponteiro de ponteiro
    pp = &p1; // o ponteiro de ponteiro esta apontando para p1 que esta apontando para "a"
    *p3 = **pp; // "c" recebe o valor de "a", que é 10 depois da atualização do valor
    int *p4 = &d; // declara o ponteiro p4 que aponta para "d"
    *p4 = b + (*p1)++; // "d" e igual a operação de soma de "b" + "a", e depois o valor de a é atualizado com incremento
    
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);
    return 0;
}
    //saida: a=11, b=20, c=10, d=31