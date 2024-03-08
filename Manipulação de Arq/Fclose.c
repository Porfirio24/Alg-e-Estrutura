#include <stdio.h>

int main(void){
int c;
  int nlinhas = 0;
  FILE *fp;
  // Abre o arquivo para leitura
  fp = fopen("arquivo.txt", "rt");
  if(fp==NULL){
    printf("Erro\n")
      return 1;
  }
  //laço de repetição
  while ((c=fgetc(fp))!=EOF){
    if(c=='\n')
      nlinhas++;
  }
  //fecha o arquivo
  fclose(fp);
  //Exibe resultado na tela
  printf("Numero de linhas = %d\n", nlinhas);
  return 1;
}