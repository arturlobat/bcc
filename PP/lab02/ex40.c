#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float sal, liq, dias;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%f", &dias);
    sal = dias*30;
    liq = sal-(sal*0.08);

    printf("O salario liquido sera de: %.2f", liq);
    return 0;
}