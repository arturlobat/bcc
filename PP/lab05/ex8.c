#include <stdio.h>
#include <math.h>

float hipo(float x, float y);

int main()
{
    float x, y;

    printf("Digite os catetos da hipotenusa (tecle space entre eles): ");
    scanf("%f %f", &x, &y);
    printf("%.2f\n", hipo(x, y));
}

float hipo(float x, float y)
{
    printf("A hipotenusa vale: ");
    return sqrt(x*x + y*y);        // função de retorno valor da hipotenusa
}
