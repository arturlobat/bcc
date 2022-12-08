#include <stdio.h>

int main()
{
  int X[10];
  for (int i = 0; i < 10; i++)
  {
    printf("Digite o valor %d: ", i + 1);
    scanf("%d", &X[i]);
  }
  for (int i = 0; i <= 10; i++)
  {
    int n_primo = 1;
    for (int a = 2; a < X[i]; a++)
    {
      if (X[i] % a == 0)
      {
        n_primo = 0;
        break;
      }
    }
    if (n_primo) printf("\nPosicao %d: %d\n", i, X[i]);
  }
  return 0;
}