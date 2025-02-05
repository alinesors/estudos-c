#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void notas(){

    float nota1, nota2, nf;

    printf("nota 1: ");
    scanf("%f", &nota1);

    printf("nota 2: ");
    scanf("%f", &nota2);

    nf = nota1 + nota2;

    if(nf < 60.00){
        printf("NOTA FINAL: %.1f\n", nf);
        printf("REPROVADO");
    }
    else if(nf > 60.00){
        printf("NOTA FINAL: %.1f\n", nf);
        printf("APROVADO");
    }
    else{
        printf("erro");
    }

}

void baskara(){

    float a, b, c, x1, x2, delta;
    float baskara1, baskara2;

    printf("a: ");
    scanf("%f", &a);
    
    printf("b: ");
    scanf("%f", &b);    
    
    printf("c: ");
    scanf("%f", &c);

    delta = sqrt((b*b) - 4 * a * c);
    
    baskara1  = (-b + delta)/(2*a);
    baskara2  = (-b - delta)/(2*a);
    
    if(delta > 0){
        printf("x1 = %.4f\n", baskara1);
        printf("x2 = %.4f\n", baskara2);
    }else{
        printf("Esta equacao nao possui raizes reais");
    }
}

void menor3(){ 

    int v1, v2, v3;

    printf("v1: ");
    scanf("%d", &v1);

    printf("v2: ");
    scanf("%d", &v2);

    printf("v3: ");
    scanf("%d", &v3);

    if(v1 > v2 && v2 <= v3){
            printf("menor = %d", v2);
    }else if(v1 <= v2 && v1 <= v3){
            printf("menor = %d", v1);
    }else if(v3 < v1 && v3 < v2){
            printf("menor = %d", v3);
    }
}

void operadora(){
    
    float minutos, valor;

    printf("qtd de minutos: ");
    scanf("%f",  &minutos);

    if(minutos < 100){
        valor = 50.00;
        printf("VALOR A PAGAR %.2f$\n", valor);
    }
    else{
        valor = 50 + ((minutos - 100)*2.00);
        printf("VALOR A PAGAR %.2f$\n", valor);
    }
}

void troco(){

    float precoUni, dinheiro, troco;
    int qtd;

    printf("preco unitario: ");
    scanf("%f", &precoUni);

    printf("qtd  comprada: ");
    scanf("%d", &qtd);

    printf("dinheiro recebido: ");
    scanf("%f", &dinheiro);

    produto = qtd * precoUni;

    if(dinheiro > preduto){
        troco = dinheiro - produto ;
        printf("troco: %.2f", troco); 
    }
    else if(dinheiro < produto){
        troco = produto - dinheiro;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2f REAIS", troco); 
    }
}


void main(){

    notas();
    baskara();
    menor3();
    operadora();
    troco();


    return 0;
}