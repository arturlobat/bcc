#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float a, l;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &l);
    a=l*l;
    printf("A area do quadrado vale: %.2f", a);
    return 0;
}