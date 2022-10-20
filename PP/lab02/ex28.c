#include<stdio.h>
#include<stdlib.h>

int main()
{
  float v1, v2, v3, soma; //variáveis
  
  printf("Digite um valor v1 qualquer: ");
  scanf("%f", &v1);
  printf("Digite um valor v2 qualquer: ");
  scanf("%f", &v2);
  printf("Digite um valor v3 qualquer: ");
  scanf("%f", &v3);
  soma=((v1*v1)+(v2*v2)+(v3*v3));
  printf("A soma do quadrado dos valores eh: %.2f", soma);
  return 0;
}