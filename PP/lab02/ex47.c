#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int nmrlido;
    printf("Digite um numero inteiro positivo de quatro digitos: ");
    scanf("%d", &nmrlido);

    printf("%d\n", nmrlido/1000);
    printf("%d\n", (nmrlido%1000)/100);
    printf("%d\n", (nmrlido%100)/10);
    printf("%d\n", nmrlido%10);

    return 0;
}