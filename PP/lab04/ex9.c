#include <stdio.h>

int main() 
{
    int nmr;
    printf("De um valor(os impares serao mostrados): ");
    scanf("%d", &nmr);
    int contador = 0; int i = 1;
    while (contador < nmr) 
    {
        if (i%2 != 0) 
        {
            printf("%d\n", i);
            contador++;
        }
        i++;
    }
    return 0;
}