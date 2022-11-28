#include <stdio.h>

int main() 
{
    int i = 1;
    int soma = 0;
    int contador = 0;
    while (contador < 50) 
    {
        if (i % 2 == 0) 
        {
            soma += i;
            contador++;
        }
        i++;
    }
    printf("A soma dos primeiros 50 pares vale: %d\n", soma);
    return 0;
}