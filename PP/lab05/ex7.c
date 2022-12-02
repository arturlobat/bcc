#include <stdio.h>

float fh(float c);

int main()
{
    float c;

    printf("De a temperatura em graus Celsius: "); 
    scanf("%f", &c);
    printf("%.2f\n", fh(c));
}
float fh(float c)
{
    printf("A temperatura convertida em Fahrenheit vale: ");
    return c * (9.0 / 5.0) + 32.0;      // funçao de retorno em fahrenheit
}