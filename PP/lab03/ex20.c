#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("Digite lado um: ");
    scanf("%d", &a);
    printf("Digite o lado dois: ");
    scanf("%d", &b);
    printf("Digite o lado tres: ");
    scanf("%d", &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && b == c)
        printf("Triangulo equilatero.");
        else if (a == b || b == c || a == c)
        printf("Triangulo isosceles.");
        else
        printf("Triangulo escaleno.");
    }
    else
        printf("Os lados nao formam um triangulo.");

    return 0;
}