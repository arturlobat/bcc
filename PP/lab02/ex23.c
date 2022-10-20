#include <stdio.h>
#include <stdlib.h>

int main()
{
    float met, jar;
    printf("Digite um comprimento em metros: ");
    scanf("%f", &met);
    jar=(met/0.91);
    printf("O comprimento convertido em jardas vale: %.2f", jar);
    return 0;
}


