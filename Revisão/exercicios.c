#include <stdio.h>
#include <stdlib.h>
#include "library.h"
int main() {
  int valor1, valor2, option;
  int resultado;
  int base;
  int expoente;
  int n;
  int fat = 1;
  int fibo;
  printf("Digite o numero do exercicio: ");
  scanf("%d", &option);
  while (option !=0) {

    switch (option) {

      case 1 :  
        printf("Digite dois valores?\n");
        scanf("%d", &valor1); 
        scanf("%d", &valor2);
        exercicio1(valor1, valor2);
      break;

      case 2:    
        printf("Digite dois valores?\n");
        scanf("%d", &valor1); 
        scanf("%d", &valor2);
        exercicio2(valor1, valor2);
       break; 

      case 3 : 
        printf("Complete o cadastro:\n");
        exercicio3();
      break;

      case 5 :
        exercicio5();
      break;

      case 7 :
        printf("Digite uma base e um expoente:\n");
        scanf("%d", &base);
        scanf("%d", &expoente);
        resultado = exercicio7(base, expoente);
        printf("Potencia: %d \n", resultado);
      break;
      
      case 8 : 
        exercicio8();
      break;

      case 9 : 
        printf("Digite um numero inteiro:");
        scanf("%d", &n);
        fat = exercicio9(n);
        printf("\n\n O fatorial de %d eh: %d\n", n, fat);
      break;
      case 10 : 
        fibo = exercicio9(n);
        printf("Fibonaci: %d", fibo);
      break;
    }
    printf("Qual novo exercicio? \nDigite 0 caso deseje encerrar o programa\n");
    scanf("%d", &option);
  }

  return 0;
}

