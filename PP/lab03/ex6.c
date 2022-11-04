#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1>n2) printf ("O primeiro numero digitado e o maior, e a diferenca entre eles vale: %d.\n", (n1-n2));
     else if (n1<n2) printf ("O segundo numero digitado e o maior, e a diferenca entre eles vale: %d.\n", (n2-n1));
        else printf("Os números são iguais.");
    
    return 0;
} 