#include <stdio.h>

int main()
{
  int M[5][5];

  int X;
  int l = 0, c = 0;
  int p = 0;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1);
      scanf("%d", &M[i][j]);
    }
  }
  printf("Digite X: ");
  scanf("%d", &X);
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (M[i][j] == X)
      {
        l = i;
        c = j;
        p = 1;
      }
    }
  }
  if (p)
  {
    printf("Linha: %d\n", l);
    printf("Coluna: %d\n", c);
  }
  else
  {
    printf("Nao foi encontrado!\n");
  }
  return 0;
}