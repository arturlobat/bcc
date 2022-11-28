#include <stdio.h>

int main() 
{
    int i = 1;
    int soma = 0;
    while (i < 2000000) 
    {
        int p = 1;
        int contador = 0;
        while (p <= i) 
        {
            if (i % p == 0) 
            {
                contador++;
            }
            p++;
        }
        if (contador == 2) 
        {
            soma += i;
        }
        i++;
    }
    printf("%d\n", soma);
    return 0;
}