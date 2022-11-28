#include <stdio.h>

int main() 
{
    float z = 1.10;
    float c = 1.50;
    int ano = 0;
    while (z <= c) 
    {
        c += 0.02;
        z += 0.03;
        ano++;
    }
    printf("O Ze sera maior que Chico apos %d anos.\n", ano);
    return 0;
}
