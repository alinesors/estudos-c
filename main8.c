#include <stdio.h>

struct componente{
    char tipo[20];
    char referencia[4];
    unsigned char num_ref;
    int  valor;
    char unidade[10];
}comp;

int main(){

   printf("tipo de componente: ");
   fflush(stdin);
   fgets(comp.tipo,20,stdin);

   printf("referencia do componete: ");
   fflush(stdin);
   fgets(comp.referencia,4,stdin);

   printf("numero da referencia: ");
   scanf("%c",&comp.num_ref);
   getchar();

   printf("valor do componente: ");
   scanf("%d",&comp.valor);
   getchar();

   printf("unidade: ");
   fflush(stdin);
   fgets(comp.unidade,10,stdin);

    printf("\n\n COMPONENTE CRIADO: \n\n");
    printf("%s\n", comp.tipo);
    printf("%s", comp.referencia);
    printf("%c", comp.num_ref);
    printf("\nvalor: %d", comp.valor);
    printf("%s\n\n", comp.unidade);

    return 0;
}