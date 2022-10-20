#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float c,k;
    printf("Digite uma temperatura em Kelvin: ");
    scanf("%f", &k);
    c = k - 273.15;
    printf("-------------------------------------------------------------\n");
    printf("A temperatura convertida de Kelvin para Celsius eh: %.2f", c);
    return 0;
}