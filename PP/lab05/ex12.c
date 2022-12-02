#include <stdio.h>

int soma (int n);

int main()
{
    int n;

    printf("Digite o numero que tera seus algarimos somados: ");
    scanf("%d", &n);
    printf("A soma dos algarismos desse numero vale: ");
    if (n > 0) printf("%d\n", soma(n));
    else printf("Número inválido\n");
}

int soma(int n)
{
    int soma = 0;

    while (n > 0)
    {
        soma += n%10;
        n /= 10;
    }

    return soma;
}