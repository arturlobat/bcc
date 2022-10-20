#include <stdio.h>

int main() 
{
    float salario;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    salario *= 1 + 0.05 - 0.07;
    printf("O salario com desconto: %.2f", salario);
    return 0;
}