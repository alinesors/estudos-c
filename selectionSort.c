#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void selectionSortCrescente(int *vet, int n) {
    int i, j, min, aux;

    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (vet[j] < vet[min]) {
                min = j;
            }
        }

        if (min != i) {
            aux = vet[i];
            vet[i] = vet[min];
            vet[min] = aux;

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
        selectionSortCrescente(vet, contador);
    }

    free(vet);
    return 0;
}