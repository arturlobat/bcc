#include <stdio.h>

int main ()
{
    int c, linhas, x;
    int z = 1;

    printf("Linhas desejadas?\n");       
    scanf("%d", &linhas);

    for (x = 1; x <= linhas; x++)
    {
        for (c = 1; c <= x; c++)
        {
            printf(" %d ", z);
            z++;
        }
        printf("\n");
    }        
return 0;
}      