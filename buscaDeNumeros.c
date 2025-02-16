#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buscaBin(int *vet, int nTam, int procurado, int *op) {
    int dir = nTam - 1, esq = 0;
    *op = 1;  

    while (esq <= dir) {
        int meio = (esq + dir) / 2;
        if (vet[meio] == procurado) {
            return meio;
        } else if (vet[meio] < procurado) {
            esq = meio + 1;
        } else {
            dir = meio - 1;
        }
        (*op)++;  
    }
    return -1;  
}

int main() {
	int procurado, num;
	int *vet = NULL;
	int tam = 0;

	if (scanf("%d", &procurado) != 1) {
		printf("-1\n1\n");
		return 0;
	}

	while (scanf("%d", &num) != EOF) {
		int *aux = realloc(vet,(tam + 1)*sizeof(int));
		if (!aux) {
			free(vet);
			return 1;
		}
		vet = aux;
		vet[tam] = num;
		tam++;
	}
	if (tam == 0) {
		printf("-1\n1\n");
		return 0;
	}

	int op;
	int i = buscaBin(vet, tam, procurado, &op);
	printf("%d\n%d\n", i, op);
	free(vet);
	return 0;
}
