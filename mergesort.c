#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printVet(int *vet, int left, int right) {
    for (int i = left; i <= right; i++) {
        printf("%d ", vet[i]);a
    }
    printf("\n");
}

void mergeSubArray(int *vet, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for (i = 0; i < n1; i++)
        L[i] = vet[left + i];
    for (j = 0; j < n2; j++)
        R[j] = vet[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vet[k] = L[i];
            i++;
        } else {
            vet[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vet[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vet[k] = R[j];
        j++;
        k++;
    }

    printVet(vet, left, right);
    free(L);
    free(R);
}

void mergeSort(int *vet, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(vet, left, mid);
        mergeSort(vet, mid + 1, right);
        mergeSubArray(vet, left, mid, right);
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
        printVet(vet, 0, contador - 1);
        mergeSort(vet, 0, contador - 1);
    }
    free(vet);
    return 0;
}
