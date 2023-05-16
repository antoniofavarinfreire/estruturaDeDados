#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct lista {
    int numeros;
    struct lista *next;
}Lista;

Lista* criaLista(){
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if(novo==NULL){
        return 0;
    }
    novo -> next = NULL;
    return (novo);
}

int vazia (Lista *l) {
    return (l == NULL);
}

void inserirInicio (Lista *l, int numero){
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if(novo == NULL){ exit(0);}
    novo -> numeros = numero;
    novo -> next = l->next;
    l-> next = novo;
}

void imprimeLista (Lista *l) {
    Lista *aux;
    aux = l -> next;
    while(aux != NULL){
        printf("%d", aux-> numeros);
        aux = aux->next;
    }
    printf("\n \n");
}

int main() {
    Lista *l;
    int quantidade, i, numero;
    l = criaLista();
    printf("Digite o tamnho da lista: ");
    scanf("%d", &quantidade);
    for(i=0 ; i<quantidade ; i++){
        printf("Digite um numero para adicionar a lista: ");
        scanf("%d", &numero);
        inserirInicio(l, numero);
        numero = 0;
    }
    imprimeLista(l);
    return 0;
}