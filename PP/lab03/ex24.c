#include <stdio.h>


int main()
{
    float vlr, imp;
    char es;

    printf("Valor do produto: ");
    scanf("%f", &vlr);

    printf("Estado de destino do produto (MG, SP, RJ ou MS): ");
    scanf(" %c", &es);

    switch (es)
    {
        case 'MG':
            imp = 0.07;
            break;
        case 'SP':
            imp = 0.12;
            break;
        case 'RJ':
            imp = 0.15;
            break;
        case 'MS':
            imp = 0.08;
            break;
        default:
            printf("Estado invalido.");
            return 0;
    }

    printf("O valor final do produto sera de: %f",vlr*(1 + imp));

    return 0;
}