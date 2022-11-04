#include <stdio.h>

int main()
{
int n1, n2;
 printf("Digite o primeiro numero: ");
 scanf("%d", &n1);
 printf("Digite o segundo numero: ");
 scanf("%d", &n2);
 
  if (n1 > n2) printf("O primeiro numero e maior.");
  if (n1 < n2) printf("O segundo numero e maior.");

    return 0;
}