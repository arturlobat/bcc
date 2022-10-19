#include <stdio.h>
#include <stdlib.h>

int main()

{
 float k,c;
 printf("Digite uma temperatura em Celsius: ");
 scanf("%f", &c);
 k = c+273.15;
 printf("-------------------------------------------------------------\n");
 printf("A temperatura convertida de Celsius para Kelvin eh: %.2f", k);
 return 0;
}





