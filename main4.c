#include <stdio.h>

int main(){

    int x;
    
        for(x = 0; x <= 100; x++){
            if(x % 2) continue; //impar

            printf("%d\n", x);
        }

    return 0;
}