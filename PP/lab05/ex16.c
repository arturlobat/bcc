#include <stdio.h>

int desenhar(int n);

int main()
{
    int n;
    printf("Tamanho da linha(n inteiro): ");
    scanf("%d", &n);
    desenhar(n);
}

int desenhar(int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("=");
}