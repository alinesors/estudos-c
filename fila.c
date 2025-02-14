#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

void pushFila(No **fila, int num) {
    No *aux, *novo = malloc(sizeof(No));
    if (novo) {
        novo->valor = num;
        novo->proximo = NULL;
        if (*fila == NULL) {
            *fila = novo;
        } else {
            aux = *fila;
            while (aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    } 
}

void popFila(No **fila) {
    if (*fila) {
        No *remover = *fila;
        *fila = remover->proximo;
        free(remover);
    }
}

void printFila(No *fila) {
    No *aux = fila;
    while (aux) {
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
    printf("\n");
}

void sumFila(No *fila) {
    int soma = 0;
    No *aux = fila;
    while (aux) {
        soma += aux->valor;
        aux = aux->proximo;
    }
    printf("%d\n", soma);
}

int main() {
    No *fila = NULL;
    char operacao[10];
    int num;

    while (scanf("%s", operacao) != EOF) {
        if (strcmp(operacao, "push") == 0) {
            scanf("%d", &num);
            pushFila(&fila, num);
        } else if (strcmp(operacao, "pop") == 0) {
            popFila(&fila);
        } else if (strcmp(operacao, "print") == 0) {
            printFila(fila);
        } else if (strcmp(operacao, "sum") == 0) {
            sumFila(fila);
        } else if (strcmp(operacao, "exit") == 0) {
            break;
        }
    }
    while (fila)
        popFila(&fila);
    
    return 0;
}