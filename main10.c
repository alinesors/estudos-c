#include <stdio.h>
#include <stdlib.h>

int* insere(int* v1, int valor, int tam, int pos){

    if(pos == tam){// limite
        int* v2 = (*int)realloc(v1,sizeof(int) * tam * 2);
        v2[pos] = valor;
        return v2;
    }
    v1[pos] = valor;
    return v1;
}

int main(){



    return 0;
}