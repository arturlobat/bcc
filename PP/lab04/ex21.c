#include <stdio.h>

int main() 
{
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    int i = a;
    int contador = 0;
    while (i <= b) 
    {
        int pp = 1;
        int divisores = 0;
        while (pp <= i) 
        {
            if (i % pp == 0) {
                divisores++;
            }
            pp++;
        }
        if (divisores == 2) 
        {
            contador++;
        }
        i++;
    }
    printf("Existem %d n's primos entre %d e %d\n", contador, a, b);
    return 0;
}