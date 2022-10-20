#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mtq, ac;
    printf("Digite uma area em metros quadrados: ");
    scanf("%f", &mtq);
    ac=mtq*0.000247;
    printf("A area convertida em acres vale: %.2f", ac);
    return 0;
}
