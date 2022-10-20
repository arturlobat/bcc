#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float x, y, dist;

    printf("Digite as coordenadas x e y: ");
    scanf("%f %f", &x, &y);
    dist=sqrt(x*x+y*y);
    printf("A distancia da origem sera de: %.2f", dist);
    
    return 0;
}
