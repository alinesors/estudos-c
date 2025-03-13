#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printVet(int *vet, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int dividir(int *vet, int left, int right, int size) {
    int pivot = vet[right];
    printf("Subarray: ");
    for (int i = left; i <= right; i++) {
        printf("%d ", vet[i]);
    }
    printf("\nPivo: %d\n", pivot);

    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (vet[j] <= pivot) {
            i++;
            int temp = vet[i];
            vet[i] = vet[j];
            vet[j] = temp;
        }
    }
    int temp = vet[i + 1];
    vet[i + 1] = vet[right];
    vet[right] = temp;

    printf("Array: ");
    printVet(vet, size);
    return i + 1;
}

void quickSortCrescente(int *vet, int left, int right, int size) {
    if (left < right) {
        int pi = dividir(vet, left, right, size);
        quickSortCrescente(vet, left, pi - 1, size);
        quickSortCrescente(vet, pi + 1, right, size);
    }
}

int main() {
    int *vet = NULL;
    int contador = 0, num;

    char buffer[1000];
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        char *ptr = buffer;
        while (sscanf(ptr, "%d", &num) == 1) {
            int *aux = realloc(vet, (contador + 1) * sizeof(int));
            if (aux == NULL) {
                free(vet);
                return 1;
            }
            vet = aux;
            vet[contador++] = num;
            while (*ptr != ' ' && *ptr != '\0') ptr++;
            if (*ptr == ' ') ptr++;
        }
    }

    if (contador > 0) {
        quickSortCrescente(vet, 0, contador - 1, contador);
    }
    free(vet);
    return 0;
}