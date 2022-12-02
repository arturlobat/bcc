#include <stdio.h>

float vol_esf(float raio);

int main()
{
    float raio;

    printf("De o raio da esfera: "); 
    scanf("%f", &raio);
    printf("%.2f\n", vol_esf(raio));
}

float vol_esf(float raio)
{
    return (4.0/3.0)*3.14159*raio*raio*raio;
}