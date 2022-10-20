#include <stdio.h>
#include <stdlib.h>

int main()
{
  float g, r;
  printf("Digite o angulo em graus: \n");
  scanf("%f", &g);
  r = g*(3.141592/180);
  printf("O angulo convertido em radianos vale: %.2f", r);
  return 0;
}
    