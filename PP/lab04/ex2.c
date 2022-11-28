#include <stdio.h>
#include <stdlib.h>

int main()

{
int i;
    for (i = 1; i <= 100; i++) 
    {
        printf("%d\n", i);
    }
    i = 1;
    printf("\nPassou a primeira contagem!\n");
    while (i <= 100) 
    {
        printf("%d\n", i);
        i++;
    }
    i = 1;
        printf("\nPassou a segunda contagem!\n");
    do 
    {
        printf("%d\n", i);  
        i++;
    } 
    while (i <= 100);
        printf("\nAqui se encerra a contagem!\n");
    return 0;
}
