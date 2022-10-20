#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l, m;
    printf("Digite o volume em litros: ");
    scanf("%f", &l);
    m=l/1000;
    printf("O volume convertido em metros cubicos (m^3) vale: %.2f", m);
    return 0;
}
