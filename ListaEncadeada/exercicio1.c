#include <stdio.h>
#include <stdlib.h>

int main() {

  int listaEstatica[6];
  int i=0;
  float count=0;
  for(i=0 ; i<6 ; i++){
    printf("Digite 6 valores %d:", i);
    scanf("%d", &listaEstatica[i]);
  }

  for(i=0 ; i<6 ; i++){
    count += listaEstatica[i];
  }
  printf("Média: %.2f", count=count/6);
  return 0;
}
