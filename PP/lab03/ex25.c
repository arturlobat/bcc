#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, a, b, c, delta;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a != 0)
    {
        delta = b * b - 4 * a * c;
        if (delta < 0) printf("Nao existe raiz.");
        else if (delta == 0)
        {
            x = -b/(2*a);
            printf("Raiz unica: %.2f", x);
        }
        else
        {
            x =(-b + sqrt(delta)) / (2*a);
            y =(-b - sqrt(delta)) / (2*a);
            printf("Raizes reais: %.2f e %.2f", x, y);
        }
    }
    else printf("Nao configura eq. de segundo grau.");

    return 0;
}