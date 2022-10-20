#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cent, pol;
    printf("Digite o comprimento em centimetros: ");
    scanf("%f", &cent);
    pol = cent/2.54;
    printf("O comprimento convertido em polegadas vale: %.2f", pol);
    return 0;
}
