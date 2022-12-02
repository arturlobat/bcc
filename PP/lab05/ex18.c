#include <stdio.h>

int f_potencia(int x, int z);

int main()
{
    int x, z;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &x, &z);
    printf("%d\n", f_potencia(x, z));
}

int f_potencia(int x, int z)
{
    int r = 1;
    for (int i = 0; i < z; i++)
        r *= x;

    return r;
}