#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float sal, vlhr, hrt;
    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &vlhr);
    
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &hrt);
    sal=hrt*vlhr;
    printf("O salario sera de: %.2f", sal+(sal*0.1));
    return 0;
}