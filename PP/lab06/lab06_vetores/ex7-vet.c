#include <stdio.h>

int main()
{
  int A[6];

  for (int i = 0; i < 6; i++)
  {
    printf("Digite o valor %d: ", i + 1);
    scanf("%d", &A[i]);
  }
  int soma_par = 0;
  int qtd_imp = 0;

  for (int i = 0; i < 6; i++)
  {
    if (A[i] %2 == 0)
    {
      printf("Os pares sao: %d\n", A[i]);
      soma_par += A[i];
    }
    else
    {
      printf("Impares sao: %d\n", A[i]);
      qtd_imp++;
    }
  }
  printf("\nSoma de numeros pares: %d\n", soma_par);
  printf("\nQuantidade de numeros impares: %d\n", qtd_imp);
  
  return 0;

}