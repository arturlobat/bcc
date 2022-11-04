#include <stdio.h>
#include <stdlib.h>

int main()

{
    float custofb, custocc, comissao, i;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custofb);

    if (custofb <= 12000) comissao = 0.05;
    if (custofb <= 25000) comissao = 0.1;
    else comissao = 0.15;
    if (custofb <= 12000) i = 0;
    if (custofb <= 25000) i = 0.15;
    else i = 0.2;

    custocc=custofb*(1 + comissao + i);
    
    printf("-------------------------------------------\n");
    printf("O custo final para o consumidor sera de: %.2f.", custocc);

    return 0;
}
