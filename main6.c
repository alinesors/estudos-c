#include <stdio.h>
#define tam 5

int main(){

    int vetor1[tam], vetor2[tam], i, produto = 0;

    printf("entrar com o valor do vetor 1: ");
    for(i = 0; i < tam; i++){

        printf("elemento %d ",i);
        scanf("%d", &vetor1[i]);
    }

    printf("entrar com o valor do vetor 2: ");
    for(i = 0; i < tam; i++){

        printf("elemento %d ",i);
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < tam; i++){
        produto += vetor1[i] * vetor2[i];
        printf("produto: %d", produto);
    }

    return 0;
}