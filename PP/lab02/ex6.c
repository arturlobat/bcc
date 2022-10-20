#include <stdio.h>
#include <stdlib.h>
int main ()
{
 float c, f;
 printf("Conversao de Celsius em Fahrenheit\n");
 printf("---------------------------------------\n");
 printf("Digite temperatura em C: ");
 scanf ("%f", &c);
  
 f = (c * (9.0/5.0)) + 32.0;
 printf("Convertida em Fahrenheit: %.2f\n", f);

 return 0;
}