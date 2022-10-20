#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float r, ac;
    printf("Digite o valor do raio de um circulo: ");
    scanf("%f", &r);
    ac=3.141592*(r*r);
    printf("A area do circulo vale: %.2f", ac);
    return 0;
}