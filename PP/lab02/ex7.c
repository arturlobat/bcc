#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    printf("Conversao de Fahrenheit em Celsius\n");
    printf("---------------------------------------\n");
    printf("Digite a temperatura em F: ");
    scanf("%f", &f);
    c = 5.0*(f-32.0)/9.0;
    printf("Convertida em Celsius: %.2f ", c );
    return 0;
}