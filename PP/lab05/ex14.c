#include <stdio.h>

int consumo(float d, float l);

int main()
{
    float d, l;
    
    printf("Digite a distancia em km e o consumo em litros: ");
    scanf("%f %f", &d, &l);
    consumo(d, l);
}

int consumo(float d, float l)
{
    float consumo = d / l;

    if (consumo < 8)
    {
        printf("Venda o carro!\n");
    }
    else if (consumo >= 8 && consumo <= 14)
    {
        printf("Economico!\n");
    }
    else
    {
        printf("Super economico!\n");
    }
}