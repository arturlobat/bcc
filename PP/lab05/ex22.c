#include <stdio.h>

int triangulo (int h);

int main()
{
    int h;
    printf("Digite a altura do triangulo deve ter: ");
    scanf("%d", &h);

    triangulo (h);

return 0;
}

int triangulo (int h)
{
    for(int i = 1; i <= h; i++)
    {
        for(int x = i; x > 0; x--)
            printf("!");
        
        printf("\n");
    }

    for(int i = h-1; i >= 1; i--)
    {
        for(int x = i; x > 0; x--)
            printf("!");
        
        printf("\n");
    }
}