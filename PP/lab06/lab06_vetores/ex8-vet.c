#include <stdio.h>

int main()

{
  int Y[10];
  int num = 0;

  for (int i = 0; i < 10; i++)
  {
    int v;
    printf("Digite o valor %d: ", i + 1);
    scanf("%d", &v);

    for (int j = 0; j < i; j++)
    {
      if (Y[j] == v)
      {
        num = 1;
        break;
      }
    }
    if (num)
    {
      i--;
      continue;
    }
    Y[i] = v;
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", Y[i]);
  }
  return 0;
}