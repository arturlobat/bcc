#include <stdio.h>

int main()
{
  int M[2][2], MM[2][2];
  int cte;
  int op;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Digite o valor %d da matriz A: ", i * 2 + j + 1);
      scanf("%d", &M[i][j]);
    }
  }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Digite o valor %d da matriz B: ", i * 2 + j + 1);
      scanf("%d", &MM[i][j]);
    }
  }

  printf("\n");

  printf("O que voce quer?\n"); 
  printf("1 - Deseja somar as duas matrizes?\n");
  printf("2 - Deseja subtrair a primeira matriz da segunda?\n");
  printf("3 - Deseja adicionar uma constante as duas matrizes?\n");
  printf("4 - Deseja imprimir as matrizes juntas?\n");
  printf("Digite aqui a opcao desejada: ");
  scanf("%d", &op);
 
  switch (op)
  {
  case 1:
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", M[i][j] + MM[i][j]);
      }
      printf("\n");
    }
    break;
  case 2:
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", M[i][j] - MM[i][j]);
      }
      printf("\n");
    }
    break;
  case 3:
    printf("Digite aqui qual constante deseja adicionar a matriz: ");
    scanf("%d", &cte);

    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", M[i][j] + cte);
      }
      printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", MM[i][j] + cte);
      }
      printf("\n");
    }
    break;
  case 4:
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", M[i][j]);
      }
      printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", MM[i][j]);
      }
      printf("\n");
    }
    break;
  default:
    printf("Opcao invalida!\n");
    break;
  }
  return 0;
}