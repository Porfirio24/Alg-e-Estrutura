//Definição de um novo tipo: aluno 
typedef struct aluno Aluno;
/*Função que aloca memória para Struct aluno, recebe dados via teclado e retorna um ponteiro*/
Aluno*recebe_dados(void);
/*Função que recebe um ponteiro para aluno é imprime os dados*/
void imprime(Aluno*aluno);