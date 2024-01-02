int main(void) {
int x, *p;
x = 100;

p = &x;

printf("Valor de p = %p\tValor de *p = %d", p, *p);
} 
//Se tentarmos compilar o programa (não o compile ainda), você acha que o compilador nos fornece alguma mensagem? Se sim, responda:
//a) Esta mensagem é de erro ou advertência?: advertência
//b) Por que o compilador emite tal mensagem?: falta do &
//c) Compile e execute o programa. A execução foi bem sucedida?: Não, necessita de modificação
//d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida 
//pelo compilador://para que o codigo acima fique correto, basta colocar o & ao lado do x
//p=&x
//e) Compile e execute novamente o programa. A execução foi bem sucedida?: simm!
