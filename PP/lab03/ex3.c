#include <stdio.h>
#include <math.h>

int main ()
{
float nr;

printf("Digite um numero real: ");
scanf("%f", &nr);

 if (nr>=0) printf("A raiz quadrada do numero vale: %f", sqrt(nr));
    else printf ("O quadrado do numero vale: %f", nr * nr);

return 0;
}
