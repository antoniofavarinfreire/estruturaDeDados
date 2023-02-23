#include <stdio.h>
#include <stdlib.h>
#include "library.h"

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


void exercicio5() {
  int count;
  while (count <= 100){
    printf("%d ", count);
    count ++;
  }
  printf("\n");
}

void exercicio6() {
  int count;
  while(count <= 100){
    if((count % 2) == 0 ){
      printf("%d ", count);
    }else if((count%6) == 0){
      printf("%d ", count);
    }
    count ++;
  }
}

int exercicio7(int base, int expoente){
  if(expoente == 0){
    return 1;
  }else {
    return (base * exercicio7(base, expoente - 1));
  }
}

void exercicio8(){
  int i, count;
  while(count <= 10){
    i = 2;
    printf("%d X %d = %d\n", i, count, i*count);
    count ++;
  }
  count = 0;
  printf("\n");
  while(count <= 10){
    i = 3;
    printf("%d X %d = %d\n", i, count, i*count);
    count ++;
  }
  count = 0;
  printf("\n");
  while(count <= 10){
    i = 5;
    printf("%d X %d = %d\n", i, count, i*count);
    count ++;
  }
}

int exercicio9(int n){
  int i;
  for (i=1;n>1;n=n-1){
    i = i * n;
  }
  return i;
}

void exercicio10(){
  int a = 1, b = 1, aux, i;
  for(i = 3; i <= 13; i ++){
    aux = a + b;
    a = b;
    b = aux;
    printf("%d\n", b);
  }
}

void exercicio11(){
  int inter = 0, count;
  while(inter <= 50){
    if((inter % 8) == 0 ){
      printf("%d ", inter);
      count ++;
    }
    inter ++;
  }
  printf("%d\n", count);
}

void exercicio12(){
  int par = 0;
  int impar = 0;
  int intervalo = 0;

  while(intervalo <= 200){
    if((intervalo % 2) == 0){
      par += intervalo;
    }else {
      impar += intervalo;
    }
    intervalo ++;
  }
  printf("Soma dos pares  : %d \n", par);
  printf("Soma dos impares: %d \n", impar);
}











