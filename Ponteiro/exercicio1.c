#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
  char  nome [50];
  int   idade;
  float peso;
}Pessoa;

int main() {
  Pessoa p;
  printf("Digite nome: ");
  gets(p.nome);
  fflush(stdin);
  printf("Digite idade: ");
  scanf("%d", &p.idade);
  printf("Digite peso: ");
  scanf("%f", &p.peso);

  printf("Nome: %s\n", p.nome);
  printf("Peso: %.2f\n", p.peso);
  printf("Nome: %d\n", p.idade);
  return 0;
}
