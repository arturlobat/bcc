#include <stdio.h>

int vl_maximo(int a, int b);

int main()
{
    int a, b;

    printf("Digite dois numeros inteiros que serao comparados: ");
    scanf("%d %d", &a, &b);
    printf("O maior valor digitadoi foi: %d\n", vl_maximo(a, b));
}

int vl_maximo(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}