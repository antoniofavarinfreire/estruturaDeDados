#include <stdio.h>
#include <stdlib.h>


void convert(char *t);


void main() {
  char nome[50];

  printf("Digite o nome ");
  gets(nome);

  convert(nome);
  printf("O nome é: %s\n", nome)
}


void convert(char *t){

  if(t[0] >= 'a' && t[0]<='z'){
    t[0] -= 'a'-'A'; //32
  }
  
}

