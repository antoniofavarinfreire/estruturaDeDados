#include <stdio.h>
#include <stdlib.h>

void escreva(int *l, int *c, char *t);

int main() {
  int linha, coluna;
  char text[50];
  printf("Digite a linha: ");
  scanf("%i", &linha);
  printf("Digite uma columan: ");
  scanf("%i", &columa);

}



void escreva(int *l, int *c, char *t){
  int i;
  for(i = 1 ; i <= *l ; i++){
    printf("\n");
  }
  for(i = 1 ; i <= *l ; i++){
    printf(" ");
  }
}
