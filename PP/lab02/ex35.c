#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float x, y, hip;
    printf("Digite o cateto x: ");
    scanf("%f", &x);
    printf("Digite o cateto y: ");
    scanf("%f", &y);
    hip= sqrt(x*x + y*y);
    printf("Então a hipotenusa vale: %.2f", hip);
    return 0;
}