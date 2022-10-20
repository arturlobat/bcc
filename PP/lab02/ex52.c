#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float v1, v2, v3, premio, ganho1, ganho2, ganho3;
    
    printf("Digite o investimento do primeiro apostador: ");
    scanf("%f", &v1);
    printf("Digite o investimento do segundo apostador: ");
    scanf("%f", &v2);
    printf("Digite o investimento do terceiro apostador: ");
    scanf("%f", &v3);
    
    printf("Valor do premio: ");
    scanf("%f", &premio);

    ganho1 = premio*(v1/(v1+v2+v3));
    ganho2 = premio*(v2/(v1+v2+v3));
    ganho3 = premio*(v3/(v1+v2+v3));

    printf("O primeiro apostador ganhou: %.2f\n", ganho1);
    printf("O segundo apostador ganhou: %.2f\n", ganho2);
    printf("O terceiro apostador ganhou: %.2f\n", ganho3);
    return 0;
}