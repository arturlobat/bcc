#include <stdio.h>

int main()
{
    float dist, qtdl, con;
    
    printf("Informe a distancia em quilometros: ");
    scanf("%f", &dist);

    printf("Informe a quantidade de combustivel em litros: ");
    scanf("%f", &qtdl);

    con = dist / qtdl;

    if (con < 8) printf ("Venda o carro!");
    if (con >= 8 && con <= 14) printf ("Economico!");
    if (con > 14) printf("Super economico!");

    return 0;

}
