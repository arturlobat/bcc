#include <stdio.h>
#include <stdlib.h>

int main()

{
 float ms,kmh;
 printf("Digite uma velocidade em m/s: ");
 scanf("%f", &ms);
 
 kmh = ms*3.6;
 printf("--------------------------------------------\n");
 printf("A velocidade convertida em km/h vale: %.2f", kmh);
 return 0;
}