#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float kmh,ms;
    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &kmh);
    
    ms = kmh/3.6;
    printf("-----------------------------------------------\n");
    printf("A velocidade convertida em m/s vale: %.2f", ms);
    return 0;
}