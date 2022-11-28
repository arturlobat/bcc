#include <stdio.h>

int main()

{
    int natural;
    printf("De o valor: ");
    scanf("%d", &natural);
    int i = 0;
    while (i <= natural) 
    {
        printf("... \n%d\n", i);
        i++;
    }
    return 0;
}
