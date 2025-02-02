#include <stdio.h>

int main(){

    int op = 1;

    do{
        printf("digite a opcao : 1 - sim, 2 - nao\n");
        scanf("%d", &op);
        getchar();
    }while(op < 1 || op > 2);

    return 0;
}