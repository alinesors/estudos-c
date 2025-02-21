#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void insertionSortCrescente(int *vet, int n) {
    int key, i, j;

    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    for (i = 1; i < n; i++) {
        key = vet[i];
        j = i - 1;

        while (j >= 0 && vet[j] > key) {
            vet[j + 1] = vet[j];
            j--;
        }
        
        vet[j + 1] = key;

        if (vet[j + 1] != vet[i]) { 
            for (j = 0; j < n; j++) {
                printf("%d ", vet[j]);
            }
            printf("\n");
        }
    }
}

int main() {
    int *vet = NULL;
    int contador = 0, num;

    while (scanf("%d", &num) != EOF) {
        int *aux = realloc(vet, (contador + 1) * sizeof(int));
        if (aux == NULL) {
            free(vet);
            return 1;
        }
        vet = aux;
        vet[contador++] = num;
    }

    if (contador > 0) {
        insertionSortCrescente(vet, contador);
    }

    free(vet);
    return 0;
}