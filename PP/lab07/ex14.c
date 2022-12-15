#include <stdio.h>

int main()

{
  char st1[50], st2[50];
  int i, j, n;


  printf("String 1: ");
  fgets(st1, 100, stdin);
  printf("String 2: ");
  fgets(st2, 100, stdin);
  printf("Numero de letras de cada string: ");
  scanf("%d", &n);

  for (i = 0; st1[i] != '\0'; i++)
  {
  }
  for (j = 0; j < n; j++)
  {
    st1[i + j] = st2[j];
  }
  st1[i + j] = '\0';

  printf("%s", st1);
}