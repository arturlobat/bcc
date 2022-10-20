#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ac, mtq;
    printf("Digite uma area em acres: ");
    scanf("%f", &ac);
    mtq=ac*4048.58;
    printf("A area convertida em metros quadrados (m^2) vale: %.2f", mtq);
    return 0;
}


