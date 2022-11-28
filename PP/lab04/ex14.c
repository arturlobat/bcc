#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int d1, d2, i, a;
    printf("Quantas vezes o dado sera jogado ? ");
    scanf("%d", &a);
    srand(time(NULL));

    for (i = 1; i <= a; i++)
    {
        d1 = (rand() % 5) + 1;
        d2 = (rand() % 5) + 1;
        if (d1 > d2)
        {
        printf("%d maior que %d\n", d1, d2);
        }
        else if (d2 > d1)
        {
        printf("%d maior que %d\n", d2, d1);
        }
        else if (d1 == d2)
        {
        printf("%d e %d iguais\n", d1, d2);
        }
    }
return 0;
}