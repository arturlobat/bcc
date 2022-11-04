#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    float qtd, preco;

    printf("Informe o codigo do produto: ");
    scanf("%d", &c);

    printf("Informe a quantidade: ");
    scanf("%f", &qtd);

    switch (c)
    {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.70;
            break;
        case 105:
            preco = 2.20;
            break;
        case 106:
            preco = 1.00;
            break;
        default:
            printf("Este codigo e invalido!");
            return 0;
    }

    printf("O valor a ser pago sera de: %.2f", qtd * preco);

    return 0;
}