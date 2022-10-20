#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hec, mtq;
    printf("Digite uma area em hectares: ");
    scanf("%f", &hec);
    mtq=hec*10000;
    printf("A area convertida em metros quadrados vale: %.2f", mtq);
    return 0;
}