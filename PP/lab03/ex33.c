#include <stdio.h>

int main()
{
    float pa, pn, percen;

    printf("Informe o preco antigo do produto: ");
    scanf("%f", &pa);

    if (pa <= 50) percen = 0.05;
    else if (pa <= 100) percen = 0.1;
    else percen = 0.15;

    pn = pa * (1 + percen);

    printf("O preco novo do produto sera de: %.2f\n", pn);

    if (pn <= 80) printf("Barato.");
    else if (pn <= 120) printf("Normal.");
    else if (pn <= 200) printf("Caro.");
    else printf("Muito caro.");

    return 0;
}