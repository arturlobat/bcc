#include <stdio.h>

int exclama(int num);

int main()
{
    int num;

    scanf("%d", &num);
    exclama(num);
}

int exclama(int num)
{
    int i;
    int j;

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
            printf("!");
        printf("\n");
    }
}