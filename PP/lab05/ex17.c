#include <stdio.h>

int soma(int a, int b);

int main()
{
    int a, b;
    
    printf("Digite dois numeros inteiros (tecle space entre eles): ");
    scanf("%d %d", &a, &b);
    printf("%d\n", soma(a, b));
}

int soma(int a, int b)
{
    int soma = 0;

    if (a > b) 
    {
        int aux = a;
        a = b;
        b = aux;
    }
    for (int i = a + 1; i < b; i++)
        soma += i;
    return soma;
}