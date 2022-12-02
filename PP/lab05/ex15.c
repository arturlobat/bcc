#include <stdio.h>
#include <math.h>

int triangulo(float x, float y, float z);
int tipo(float x, float y, float z);

int main()
{
    float x, y, z;

    printf("Digite os valores dos lados do triangulo: ");
    scanf("%f %f %f", &x, &y, &z);
    if 
    (triangulo(x, y, z)) tipo(x, y, z);
    else 
    printf("Nao e um triangulo!\n");
}

int triangulo(float x, float y, float z)
{
    if (x < y + z && y < x + z && z < x + y) return 1;
     else return 0;
}

int tipo(float x, float y, float z)
{
    if (x == y && y == z) 
    printf("Equilatero!\n");
    else if 
    (x == y || y == z || x == z) printf("Isosceles!\n");
    else 
    printf("Escaleno!\n");
}