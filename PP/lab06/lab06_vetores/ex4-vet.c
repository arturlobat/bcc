#include <stdio.h>

int main()
{
  int A[5];
  int M = 0;
  int m = 0;
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o valor %d: ", i + 1);
    scanf("%d", &A[i]);
if (A[i] > A[M])
{
M = i;
}
if (A[i] < A[m])
{
m = i;
}
}
printf("O menor valor esta na posicao: %d, enquanto o maior valor esta na posicao: %d\n", m, M);
  return 0;
}