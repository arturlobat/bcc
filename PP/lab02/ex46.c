#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int nmrlido, nmrgerado;
    printf("Digite um inteiro positivo de tres digitos: ");
    scanf("%d", &nmrlido);
    nmrgerado = (nmrlido%10)*100;
    nmrlido = nmrlido/10;
    nmrgerado = nmrgerado+(nmrlido%10)*10;
    nmrlido = nmrlido/10;
    nmrgerado = nmrgerado+nmrlido;
    printf("Numero gerado: %d", nmrgerado);
    return 0;
}