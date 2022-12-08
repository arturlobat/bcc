#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
  int  M [4][4];

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      M[i][j] = rand() % 20 + 1;
    }
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }
  printf("\nA matriz transformada abaixo...\n\n");
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i < j)
      {
        M[i][j] = 0;
      }
    }
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }
  return 0;
}