#include <stdio.h>
#include <stdlib.h>

int main(void){
//criar o arquivo: entrada.txt no modo texto "w" write

FILE* arquivo = fopen("entrada_escrita.txt", "w");
char c[20];

if(arquivo==NULL){
printf("Erro na abertura do arquivo!\n");
exit(1);
}
else{
printf("arquivo aberto\n");
}

//fputc('A', arquivo);
fputs("hellow world", arquivo);
//fgets(c, 20, arquivo); //ler uma linha do arquivo
fscanf(arquivo, "%s", c);
printf("%c\n", c); //imprime o  caracter lido

if(!fclose(arquivo)){
printf("arquivo fechado com suceso");
} //fecha o arquivo criado

return 0;
}