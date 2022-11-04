#include <stdio.h>

int main()
{
    float a, p;

    printf("Informe a altura: ");
    scanf("%f", &a);

    printf("Informe o peso: ");
    scanf("%f", &p);

    if (a < 1.20) 
    {
        if (p <= 60) printf("Classificacao: A");
        else if (p <= 90) printf("Classificacao: D");
        else printf("Classificaçao: G");
    } 
    else if (a <= 1.70) 
    {
        if (p <= 60) printf("Classificacao: B");
        else if (p <= 90) printf("Classificacao: E");
        else printf("Classificaçao: H");
    } 
    else 
    {
        if (p <= 60) printf("Classificacao: C");
        else if (p <= 90) printf("Classificacao: F");
        else printf("Classificacao: I");
    }

    return 0;
}