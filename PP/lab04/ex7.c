#include <stdio.h>

int main () 
{
    int i = 0;
    int res = 0;
    int contador = 0;
    while (i < 10) 
    {
        int v;
        printf("De um valor: ");
        scanf("%d", &v);
        if (v>0) 
        {
            res+=v;
            contador++;
        }
        i++;
    }
    printf("A media sera igual a: %d\n", res/contador);
    return 0;
} 