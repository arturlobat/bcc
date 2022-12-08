#include <stdio.h>

int main()

{
  int X[50];
        for(int i = 0; i < 50; i++)
{
X[i] = (i + 5 * i)%(i + 1);
}
        for(int i = 0; i < 50; i++)
{
        printf("\n%d\n", X[i]);
}
  return 0;
}
