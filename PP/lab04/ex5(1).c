#include <stdio.h>

int main() 
{
    int i = 0;
    int res = 0;
    while (i < 10) 
    {
        int v;
        printf("Digite um valor: ");
        scanf("%d", &v);
        res+=v; i++;
    }
    printf("A soma sera igual a: %d\n", res);
    return 0;
}