#include <stdio.h>

int verifica(int n);

int main()
{
    int n;
    
    printf("Digite o numero que sera verificado: ");
    scanf("%d", &n);
    printf("%d\n", verifica(n));
}

int verifica(int n)      // função de retorno 
{
    if (n > 0)
        return 1;
    else if (n < 0)
        return -1;
    else
        return 0;
}