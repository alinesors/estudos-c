#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void terreno(){

    float l, c, valor, preco, area;

    printf("largura: ");
    scanf("%f", &l);

    printf("comprimento: ");
    scanf("%f", &c);

    printf("valor: ");
    scanf("%f", &valor);

    area = c * l;
    preco = area * valor;

    printf("Area do terreno: %.2f\n", area);
    printf("Preco do terreno: %.2f\n", preco);
}

void retangulo() {

	float base, altura, area, perimetro, diagonal;

	printf("base: ");
	scanf("%f", &base);

	printf("altura: ");
	scanf("%f", &altura);

	area = base * altura;
	perimetro = (2*base)+(2*altura);
	diagonal = sqrt((altura * altura) + (base * base));

	printf("AREA: %.4f\n", area);
	printf("PERIMETRO: %.4f\n", perimetro);
	printf("DIAGONAL: %.4f\n", diagonal);

}

void idades(){

    int  idade1, idade2;
    char nome1[50], nome2[50];
    float media;

    printf("nome1: ");
    scanf("%s", nome1);
    getchar();

    printf("idade1: ");
    scanf("%d", &idade1);

    printf("nome2: ");
    scanf("%s", nome2);
    getchar();

    printf("idade2: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2)/ 2.0;

    printf("a idade média de %s e %s é de %.1f anos", nome1, nome2, media);

}

void soma(){

    int x, y, soma;

    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    soma = x + y;

    printf("SOMA = %d",  soma);
}

void troco(){

    float preco, troco, dinheiro;
    int qtdcomprada;

    printf("Preço unitário do produto: ");
    scanf("%f", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &qtdcomprada);

    printf("Dinheiro recebido: ");
    scanf("%f", &dinheiro);

    troco = dinheiro - (preco*qtdcomprada);
    printf("TROCO = %.2f", troco);

}

void circulo(){

    float raio, area, pi = 3.14159;

    printf("raio: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("AREA = %.3f", area);
}

void pagamento(){

    char nome[50];
    int horas;
    float valorHora, pagamento;

    printf("nome: ");
    scanf("%s", nome);

    printf("Valor por hora: ");
    scanf("%f", &valorHora);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = valorHora * horas;

    printf("O pagamento para %s deve ser %.2f", nome, pagamento);

}

void consumo(){

    int distancia, gasto;
    float media;


    int distancia;
    float media, gasto;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);
    
    printf("Combustível gasto: ");
    scanf("%f", &gasto);

    media = distancia/gasto;

    printf("CONSUMO MEDIO: %.3f", media);

}

void medidas(){

    float a, b, c, quadrado, triangulo, trapezio;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    quadrado = a * a;
    triangulo = (a * b)/2;
    trapezio = ((a + b)*c)/2;

    printf("AREA DO QUADRADO = %.4f\n", quadrado);
    printf("AREA DO TRIANGULO = %.4f\n", triangulo);
    printf("AREA DO TRAPEZIO = %.4f\n", trapezio);

}

void duracao(){

    int horas, minutos, segundos, tempo, resto;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &tempo);

    horas = (tempo/60)/60;
    resto = (tempo/60)%60;
    minutos = resto%60;
    segundos = tempo%60;

    printf("%d:%d:%d", horas, minutos, segundos);

}

int main(){

    terreno();
    retangulo();
    idades();
    soma();
    troco();
    circulo();
    pagamento();
    consumo();
    medidas();
    duracao();


    return 0;
}