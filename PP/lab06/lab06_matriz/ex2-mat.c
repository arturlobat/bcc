#include <stdio.h>

int main()

{
  int M[5][5];
  
  for (int x = 0; x < 5; x++)
  {
    for (int y = 0; y < 5; y++)
    {
      if (x == y) M[x][y] = 1;
      else M[x][y] = 0;
    }
  }
  for (int x = 0; x < 5; x++)
  {
    for (int y = 0; y < 5; y++)
    {
      printf("%d ", M[x][y]);
    }
    printf("\n");
  }
  return 0;
}








