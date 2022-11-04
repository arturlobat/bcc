#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, n3, op;
    float md;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    printf("Informe o terceiro numero: ");
    scanf("%d", &n3);

    printf("Escolha:\n");
    printf("1-Geometrica\n");
    printf("2-Ponderada\n");
    printf("3-Harmonica\n");
    printf("4-Aritmetica\n");
    printf("Opcao: ");
    scanf("%d", &op);

    switch (op) 
    {
        case 1:
            md = pow(n1 * n2 * n3, 1.0 / 3.0);
            printf("A media geometrica deles vale: %.2f", md);
            break;
        case 2:
            md = ((1 * n1) + (2 * n2) + (3 * n3)) / 3;
            printf("A media ponderada deles vale: %.2f", md);
            break;
        case 3:
            md = 1 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3));
            printf("A media harmonica deles vale: %.2f", md);
            break;
        case 4:
            md = (n1 + n2 + n3) / 3.0;
            printf("A media aritmetica deles vale: %.2f", md);
            break;
        default:
            printf("Opçao invalida!");
    }

    return 0;
}