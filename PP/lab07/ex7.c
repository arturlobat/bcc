#include <stdio.h>

int main()

{
  int i, j;
  char string[100];

  printf("Escreva uma frase: ");
  fgets(string, 100, stdin);

  for (i = 0, j = 0; string[i] != '\0'; i++)
  {
    if (string[i] != ' ')
    {
      string[j] = string[i]; j++;
    }
  }
  string[j] = '\0';

  printf("Aqui a frase concatenada e sem espacos: %s", string);
}
