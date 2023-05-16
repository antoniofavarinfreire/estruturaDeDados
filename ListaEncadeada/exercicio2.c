#include <stdio.h>
#include <stdio.h>

typedef struct software {
  int vercao;
  char nome[20];
  char licenca [50];
  char fabricante[50];
}Software;

int main() {
  Software f[10];
  int i;

  for(i=0 ; i<10 ; i++){
    printf("Digite nome o %d do software: ", i + 1);
    scanf("%s", f[i].nome);
    fflush(stdin);
    printf("Digite um numero de verção do software N %d: ", i+1);
    scanf("%d", &f[i].vercao);
    printf("Digite uma licença software N %d: ", i+1);
    scanf("%s", f[i].licenca);
    printf("Digite o fobricante do software N %d: ", i+1);
    scanf("%s", f[i].fabricante);
  }
  for(i=0 ; i<10 ; i++){
    printf("Nome do software: %s\n", f[i].nome);
    printf("Verção do software: %d\n", f[i].vercao);
    printf("licença do software: %s\n", f[i].licenca);
    printf("Fabricante do software: %s\n", f[i].fabricante);
    printf("\n");
  }
  return 0;
}
