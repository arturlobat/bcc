#include <stdio.h>

int triangulo(int n);

int main()
{
    int n;

    scanf("%d", &n);
    triangulo(n);
}

int triangulo(int n)
{
    int a;
    int b;

    for (a = 1; a <= 2 * n - 1; a++)
    {
        if (a <= n)
        {
            for (b = 1; b <= a; b++)
                printf("*");
        }
        else
        {
            for (b = 1; b <= 2 * n - a; b++)
                printf("*");
        }
        printf("\n");
    }
}