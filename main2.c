#include <stdio.h> 
#include <stdlib.h>

int main(){

    int op, valor;

    printf("conversor de bases numericas\n");
    printf("1: decimal para hexadecimal\n");
    printf("2: hexadecimal para decimal\n");

    printf("informe a opcao: ");
    scanf("%d", &op);
    getchar();

    if(op == 1){
        printf("informe o valor em decimal: ");
        scanf("%d", &valor);
        getchar();
        printf("%d em hexadecimal eh: %x", valor, valor);
    }
    else if(op == 2){
        printf("informe o valor em hexadecimal: ");
        scanf("%x", &valor);
        getchar();
        printf("%x em decimal eh: %d", valor, valor);
    }
    else{
        printf("\nsua opcao eh invalida!");
    }

return 0;
}