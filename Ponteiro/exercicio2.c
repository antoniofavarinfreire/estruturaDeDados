#include<stdio.h>
#include<stdlib.h>

typedef struct animal {
  char raca [50];
  char cor [20];
  char sexo;
  float peso;
}Animal;

int main(){
  Animal a[10];
  int i;
  for(i=0 ; i<10 ; i++){
    printf("Digite uma raça: ");
    gets(a[i].raca);
    fflush(stdin);
    printf("Digite uma cor: ");
    gets(a[i].cor);
    fflush(stdin);
    printf("Digite uma sex: ");
    gets(a[i].sexo);
    fflush(stdin);
    printf("Digite uma peso: ");
    scanf("%f", &a[i].peso);
  }

  for(i=0 ; i<10 ; i++){
    printf("Digite uma raça: %s\n", a[i].raca);
    printf("Digite uma cor:  %s\n", a[i].cor);
    printf("Digite uma sexo: %s\n", a[i].sexo);
    printf("Digite uma peso: %.2f\n", a[i].peso);
  }
  return 0;
}
