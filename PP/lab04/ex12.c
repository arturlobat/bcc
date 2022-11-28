#include <stdio.h>

int main()
{
int nmr;
    printf("De um valor: ");
    scanf("%d", &nmr);
    int i = 1;
    int soma = 0;
    while (i < nmr) {
        if (nmr % i == 0) {
            soma += i;
        }
        i++;
    }
    printf("A soma dos divisores de %d -exceto ele mesmo- vale %d.\n", nmr, soma);
    return 0;
}