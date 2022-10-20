#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float alt, rc, volume;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &alt);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &rc);
    volume=3.141592*(rc*rc)*alt;
    printf("Então o volume do cilindro vale: %.2f", volume);
    return 0;
}