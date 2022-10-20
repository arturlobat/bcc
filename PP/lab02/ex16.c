#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pol, cent;
    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &pol);
    cent = pol*2.54;
    printf("O comprimento convertido em centimetros vale: %.2f", cent);
    return 0;
}
