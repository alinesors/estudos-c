#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

void pushPilha(No **pilha, int num) {
    No *novo = malloc(sizeof(No));
    if (novo) {
        novo->valor = num;
        novo->proximo = *pilha;
        *pilha = novo;
    }
}

void popPilha(No **pilha) {
    if (*pilha) {
        No *remover = *pilha;
        *pilha = remover->proximo;
        free(remover);
    }
}

void printPilha(No *pilha) {
    if (!pilha) {
        printf("\n");
        return;
    }

    No *aux = pilha;
    int tamanho = 0, i = 0;
    
    while (aux) {
        tamanho++;
        aux = aux->proximo;
    }

    int *valores = malloc(tamanho * sizeof(int));
    aux = pilha;

    while (aux) {
        valores[i++] = aux->valor;
        aux = aux->proximo;
    }

    for (int j = tamanho - 1; j >= 0; j--)
        printf("%d ", valores[j]);

    printf("\n");
    free(valores);
}

void sumPilha(No *pilha) {
    int soma = 0;
    No *aux = pilha;
    while (aux) {
        soma += aux->valor;
        aux = aux->proximo;
    }
    printf("%d\n", soma);
}

void averagePilha(No *pilha) {
    int soma = 0, count = 0;
    No *aux = pilha;

    while (aux) {
        soma += aux->valor;
        count++;
        aux = aux->proximo;
    }

    if (count == 0)
        printf("0.00\n");
    else
        printf("%.2f\n", (double)soma / count);
}

void powPilha(No *pilha) {
    if (!pilha) {
        printf("\n");
        return;
    }

    No *aux = pilha;
    int tamanho = 0, i = 0;
    
    while (aux) {
        tamanho++;
        aux = aux->proximo;
    }

    int *valores = malloc(tamanho * sizeof(int));
    aux = pilha;

    while (aux) {
        valores[i++] = aux->valor;
        aux = aux->proximo;
    }

    for (int j = tamanho - 1; j >= 0; j--)
        printf("%d ", valores[j] * valores[j]);

    printf("\n");
    free(valores);
}

int main() {
    No *pilha = NULL;
    char operacao[10];
    int num;

    while (scanf("%s", operacao) != EOF) {
        if (strcmp(operacao, "push") == 0) {
            scanf("%d", &num);
            pushPilha(&pilha, num);
        } else if (strcmp(operacao, "pop") == 0) {
            popPilha(&pilha);
        } else if (strcmp(operacao, "print") == 0) {
            printPilha(pilha);
        } else if (strcmp(operacao, "sum") == 0) {
            sumPilha(pilha);
        } else if (strcmp(operacao, "average") == 0) {
            averagePilha(pilha);
        } else if (strcmp(operacao, "pow") == 0) {
            powPilha(pilha);
        } else if (strcmp(operacao, "exit") == 0) {
            break;
        }
    }
    while (pilha)
        popPilha(&pilha);

    return 0;
}
