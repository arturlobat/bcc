#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,l;
    printf("Digite o volume em metros cubicos: ");
    scanf("%f", &m);
    l=1000*m;
    printf("O volume convertido em litros vale: %.2f", l);
    return 0;
}
