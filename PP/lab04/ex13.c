#include <stdio.h>

int main ()

{
int i = 1;
int soma= 0;
    while (i < 1000) 
    {
        if (i%3 == 0 || i % 5 == 0) 
        {
            soma+=i;
        }
        i++;
    }
    printf("Resultado: %d.\n", soma);
    return 0;
}