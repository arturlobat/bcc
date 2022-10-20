#include <stdio.h>
#include <stdlib.h>

int main()

{
 float mi,km;
 printf("Digite uma distancia em km: ");
 scanf("%f", &km);

 mi = km/1.61;
 printf("--------------------------------------------\n");
 printf("A distancia convertida em milhas vale: %.2f", mi);
 return 0;
}