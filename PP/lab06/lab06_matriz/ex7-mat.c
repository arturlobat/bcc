#include <stdio.h>
#include <stdlib.h>

int main()
{
  int M[5][5];
  
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      int v;
      int cart;
      do
      {
        v = rand() % 100;   

        cart = 0;   
        for (int y = 0; y < j; y++)
        {
          if (M[i][y] == v)
          {
            cart = 1;
            break;
          }
        }
        for (int y = 0; y < i; y++)
        {
          if (M[y][j] == v)
          {
            cart = 1;
            break;
          }
        }
      } while (cart);
      M[i][j] = v;
    }
  }
  for (int x = 0; x < 5; x++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d\t", M[x][j]);
    }
    printf("\n");
  }
  return 0;
}