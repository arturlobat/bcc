#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3) 
    {
        if (n2 < n3) printf("%d, %d, %d", n1, n2, n3);
        else printf("%d, %d, %d", n1, n3, n2);
    } else if (n2 < n1 && n2 < n3) 
    {
        if (n1 < n3) printf("%d, %d, %d", n2, n1, n3);
        else printf("%d, %d, %d", n2, n3, n1);
    } else 
    {
        if (n1 < n2) printf("%d, %d, %d", n3, n1, n2);
        else printf("%d, %d, %d", n3, n2, n1);
    }
    return 0;
}