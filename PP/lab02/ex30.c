#include<stdio.h>
#include<stdlib.h>

int main()
{
  float real, dolar, vlr;
  
  printf("Digite um valor em real (R$): ");
  scanf("%f", &real);
  printf("Digite a cotacao do dolar no momento: ");
  scanf("%f", &dolar);
  vlr=real*dolar;
  printf("-------------------------------------------------\n");
  printf("O valor convertido para dolares eh: %.2f", vlr);
  return 0;
} 