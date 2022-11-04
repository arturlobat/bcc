#include <stdio.h>
#include <math.h>

int main()

{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n >= 0) printf("O logaritmo do numero vale: %.2f", log10(n));
    else printf("O numero e invalido!");


    return 0;
}
    
