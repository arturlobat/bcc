#include <stdio.h>
#include <math.h>

int main()
{
float n;
printf("Digite um numero: ");
scanf("%f", &n);

 if (n>=0) printf("A raiz quadrada do numero vale: %f", sqrt(n));
    else printf("Numero invalido!");
 return 0;
}
