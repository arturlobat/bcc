#include <stdio.h>

int main()
{
  int M[6];

  for (int x = 0; x < 6; x++)
  {
    printf("Digite o valor %d: ", x + 1);
    scanf("%d", &M[x]);
  }
    printf("\n");
  for (int x = 5; x >= 0; x--)
  {
    printf("%d\n", M[x]);
  }

  return 0;
}