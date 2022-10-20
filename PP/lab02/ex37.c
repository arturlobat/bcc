#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float vlp, desc, vlpc;
    printf("Digite o valor do produto: ");
    scanf("%f", &vlp);
    desc=vlp*0.12;
    printf("Com desconto o produto vai custar: %.2f", vlp-desc);
return 0;
}