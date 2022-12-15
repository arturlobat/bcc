#include <stdio.h>

int main()

{  
  char seq[500];
  int i, j;
  int p = 1;
  int pmax;

  printf("Digite as sequencias de numeros...  ");
  fgets(seq, 500, stdin); 

  for (i = 0; seq[i + 4] != '\0' && seq[i + 4] != '\n'; i++)
  {
    p=1;
    for (j = i; j < i + 5; j++)
    {
      p *= (seq[j] - 48);
    }
    if (p > pmax)
    {
      pmax = p;
    }
  }

  printf("O maior produto dentre as sequencias apresentadas vale: %d\n", pmax); 
  return 0;
}