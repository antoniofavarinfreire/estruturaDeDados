#include <stdio.h>
#include <stdlib.h>
#include 'library.h'

void exercicio1(int x, int y){
  printf("A soma de duas variaveis: %d\n", x + y);
  printf("A diferença entre variáveis: %d\n", x - y);
  printf("O dobro da primeira mais o tripo da segunda: %d\n", (2*x) + (3*y));
  printf("A multiplicação das duas variaveis: %d\n", x * y);
  printf("\n");
}

void exercicio2(int x, int y){
  printf("Exercicio 2: \n");
  if(x > y){
    printf("O maior numeo: %d\n", x);
  }else {
    printf("O maior numeo: %d\n", y);
  }
  printf("\n");
}

void exercicio3(){
  char nome[30];
  float salario, valorDesconto;
  float desconto = 0.08;
  printf("Digite seu nome:");
  scanf("%s", nome);
  printf("Digite seu salario:");
  scanf("%f", &salario);
  printf("Nome do funcionario: %s\n", nome);
  printf("Valor bruto: R$ %.2f\n", salario);
  printf("Salário INSS: R$ %.2f\n", valorDesconto = salario * desconto);
  printf("Valor liquido: R$ %.2f\n", salario - valorDesconto);
  exercicio4(salario);
}

void exercicio4(float salario){
  if(salario <= 1000){
    printf("Desconto de 8 \n");
    printf("Valor com desconto: %.2f\n", salario * 0.08);
  }else if(salario >= 1001 || salario <= 1500){
    printf("Desconto de 8,5 \n");
    printf("Valor com desconto: %.2f\n", salario * 0.085);
  }else {
    printf("Salario 9 \n");
    printf("Valor com desconto: %.2f\n", salario * 0.09);
  }
  printf("\n");
}
