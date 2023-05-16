#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct no {
    int sala, semestre;
    char diaSemana;
    char disciplina;
    struct no *next;
}No;

No *criar_lista() {
    No* lista = (No*) malloc(sizeof(No));
    if(lista == NULL) return;
    
    lista->next = NULL;
    return lista;
}

void inserir_lista(No* lista, int sala, int semestre, char diaSemana, char disciplina) {
    No *novo = (No*)malloc(sizeof(No));
    novo -> sala = sala;
    novo -> semestre = semestre;
    novo -> diaSemana = diaSemana;
    novo -> disciplina = disciplina;
    novo -> next = lista-> next;
    lista->next = novo;
}

int main() {
    No *lista = (No*) malloc(sizeof(No));
    lista = criar_lista();
    int quantidade, i;
    printf("Quantas matérias esta cadastrado: ");
    scanf("%d", &quantidade);
    for(i=0 ; i<quantidade ; i++){
        printf("Digite a disciplina: ");
        
    }
    return 0;
}