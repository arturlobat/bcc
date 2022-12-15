#include <stdio.h>

int main()

{
  char produto[50];
  float v, d, avista;

  printf("Digite o nome da mercadoria: ");
  fgets(produto, 50, stdin);
  printf("Preco da mercadoria: ");
  scanf("%f", &v);
  printf("\n");
  d = v * 0.1;
  avista = v - d;

  printf("Produto: %s\n", produto);
  printf("Valor total dele: %.2f\n", v);
  printf("Desconto aplicado: %.2f\n", d);
  printf("Valor a ser pago: %.2f\n", avista);
}