#include <stdio.h>

int main(){
    int a;
    int b;

    printf("digite um valor para a:");
    scanf("%d", &a);
    getchar();

     printf("digite um valor para b:");
    scanf("%d", &b);
    getchar();


    if(a < b){
        printf("a menor que b\n");
    }
    else if(b < a){
        printf("b menor que a\n");
    }
    else{
        printf("a e igual a b");
    }
    return 0;
}