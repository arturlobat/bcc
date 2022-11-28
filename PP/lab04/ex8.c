#include <stdio.h>

int main() 
{
    int i = 0;
    int maximo = 0;
    int minimo = 0;
    while (i < 10) 
    {
        int v;
        printf("De um valor: ");
        scanf("%d", &v);
        if (i == 0) 
        {
        minimo=v, maximo=v;
        } 
        else 
        {
            if (v < minimo) 
            {
                minimo = v;
            }
            if (v > maximo) 
            {
                maximo = v;
            }
        }
        i++;
    }
    printf("O maior valor digitado foi %d enquanto o menor valor digitado foi %d !", maximo, minimo);
    return 0;
}