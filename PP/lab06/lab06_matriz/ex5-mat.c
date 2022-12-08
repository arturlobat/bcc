#include <stdio.h>

int main()

{
  int M[10][10];


  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (i < j)
      {
        M[i][j] = 2 * i + 7 * j - 2;
      }
      else if (i == j)
      {
        M[i][j] = 3 * i * i - 1;
      }
      else
      {
        M[i][j] = 4 * i * i * i - 5 * j * j + 1;
      }
    }


  }
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%d ", M[i][j]);
    }
    printf("\n");
  }

  
  return 0;
}