#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float sal, aum, salnv;
    printf("Digite o salario: ");
    scanf("%f", &sal);
    aum=(sal*0.25);
    salnv=sal+aum;
    printf("O novo salario sera de: %.2f", salnv);
return 0;
}