#include <stdio.h>
#include <stdlib.h>

int main()

{
 float mi,km;
 printf("Digite uma distancia em milhas: ");
 scanf("%f", &mi);

 km = mi*1.61;
 printf("--------------------------------------------\n");
 printf("A distancia convertida em km vale: %.2f", km);
 return 0;
}