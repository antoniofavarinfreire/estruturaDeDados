#include <stdio.h>
#include <stdlib.h>


void converta (char *c);

int main() {
  char texto[50];

  printf("Digite o texto: ");
  gets(texto);

  converta (texto);

  print("O texto e %s\n",texto);

}


void converta (char *c){
  int i = 0;
  whiel(t[i]!= '\0'){
    if(t[i]>='a' && t[i]<='z'){
     t[i]-=32; 
    }
    i++;
  }
}
