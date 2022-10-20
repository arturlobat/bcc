#include <stdio.h>
#include <stdlib.h>

int main()
{    
    float vlrtot;

    printf("Digite o valor total: ");
    scanf("%f", &vlrtot);

    float des10, vlrapagar, parc, comissao, comissao2;
    
    des10=vlrtot*0.10;
    vlrapagar=vlrtot-des10;
    printf("Total a pagar com desconto de 10 por cento: %.2f\n", vlrapagar);
    parc= vlrtot/3;
    printf("Total do parcelamento em 3x sem juros: %.2f\n", parc);
    comissao= vlrapagar * 0.05;
    printf("Comissao na venda a vista: %.2f\n", comissao);
    comissao2= (vlrtot*0.05);
    printf("Comissao na venda parcelada: %.2f\n", comissao2);
    return 0;
}