#include <stdio.h>

int fatorial(int num);

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num); 
    printf("Seu fatorial vale: %d", fatorial(num));
}

int fatorial(int num)
{
    int i; 
    int r = 1;
    for (i = 1; i <= num; i++)
        r *= i;

    return r;
}