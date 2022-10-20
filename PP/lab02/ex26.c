#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mtq, hec;
    printf("Digite uma area em metros quadrados: ");
    scanf("%f", &mtq);
    hec=mtq*0.0001;
    printf("A area convertida em hectares vale: %.2f", hec);
    return 0;
}