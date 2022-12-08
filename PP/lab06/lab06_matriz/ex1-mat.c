#include <stdio.h>

int main()
{
  int M[4][4];
  int contador = 0;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("Digite o valor da linha %d: ", i + 1);
      scanf("%d", &M[i]);
      
      printf("Digite o valor da coluna %d: ", j + 1);
      scanf("%d", &M[j]);
      
      
      if (M[i][j] > 10)
      {
        contador++;
      }
    }
  }
  printf("\nExistem %d valores maiores que 10 sao!", contador);
  return 0;
}