#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jar, met;
    printf("Digite um comprimento em jardas: ");
    scanf("%f", &jar);
    met=0.91*jar;
    printf("O comprimento convertido em metros vale: %.2f", met);
    return 0;
}
