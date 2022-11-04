#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ANO_ATUAL = 2022;
    int d, m, a;

    printf("Digite o dia: ");
    scanf("%d", &d);

    printf("Digite o mes: ");
    scanf("%d", &m);

    printf("Digite o ano: ");
    scanf("%d", &a);

    if (a > ANO_ATUAL) 
    {
        printf("Ano invalido!");    
    } 
    else if (m < 1 || m > 12) 
    {
        printf("Mes invalido!");
    } 
    else if (d < 1 || d > 31) 
    {
        printf("Dia invalido!");
    } 
    else if (m == 4 || m == 6 || m == 9 || m == 11) 
    {
        if (d > 30) 
        {
            printf("Dia invalido!");
        } 
        else 
        {
            printf("Data valida!");
        }
    } 
    else if (m == 2) 
    {
        if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) 
        {
            if (d > 29) 
            {
                printf("Dia invalido!");
            } 
            else 
            {
                printf("Data valida!");
            }
        }
         else 
        {
            if (d > 28) 
            {
                printf("Dia invalido!");
            } 
            else 
            {
                printf("Data valida!");
            }
        }
    } 
    else 
    {
        printf("Data valida!");
    }

    return 0;
}