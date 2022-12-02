#include <stdio.h>

int contador_p(int n);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", contador_p(n));
}

int contador_p(int n)
{
    int i, j, conta = 0;

    for (i = 2; i < n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }

        if (j == i)
            conta++;
    }

    return conta;
}