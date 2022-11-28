#include <stdio.h>

int main()
{
int i = 0;
    int res = 0;
    while (i < 10) 
    {
        int v;
        printf("De os valores: ");
        scanf("%d", &v);
        res += v, i++;
    }
    printf("A media dos valores sera de: %d\n", res/10);
    return 0;
}