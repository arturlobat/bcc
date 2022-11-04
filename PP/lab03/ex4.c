#include <stdio.h>
#include <math.h>

int main()
{
     int n;

     printf("Digite um numero: ");
     scanf("%d", &n);

      if (n>0){
        printf("O quadrado do numero vale: %d\n", n * n);
        printf("A raiza quadrada do numero vale: %d ", sqrt(n));
      }
    return 0;
}