#include <stdio.h>
#include <stdlib.h>


int main() 
{
    float c, l, p, custo;

    printf("Comprimento do terreno: ");
    scanf("%f", &c);
    printf("Largura do terreno: ");
    scanf("%f", &l);
    printf("Preco do metro de tela: ");
    scanf("%f", &p);

    custo = (c*2 + l*2)*p;
    
    printf("O custo para cercar sera de: %.2f", custo);
    return 0;
}