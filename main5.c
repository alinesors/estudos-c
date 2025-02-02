#include <stdio.h>
#define tam 5

int main(){

    int vetor[tam];
    unsigned i, numero;

    printf("entrar com o numero inicial do vetor.");
    scanf("%d", &numero);
    getchar();
    
        for(i = 0; i < tam; i++){
            vetor[i] = numero++;
        }
        for(i = 0; i < tam; i++){
            printf("Elemento %d = %d\n", i, vetor[i]);
        }

    return 0;
}