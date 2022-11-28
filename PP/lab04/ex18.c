#include <stdio.h>

int main() 
{
    int a = 1995;
    float sal = 2000;
    while (a < 2019) 
    {
        if (a == 1995) 
        {
            printf("Salario de %d = R$%.2f\n", a, sal);
        } 
        else 
        {
            sal *= 1.015;
            printf("Salario de %d = R$%.2f\n", a, sal);
        }
        a++;
    }
    return 0;
}