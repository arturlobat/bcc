#include <stdio.h>

int main()

{
  char string[50];
  int c;

  printf("Maiuscula: ");
  fgets(string, 50, stdin);

  for (c = 0; string[c] != '\0'; c++)
  {
    if (string[c] >= 'A' && string[c] <= 'Z')
    {
      string[c] += 32;
    }
  }
  printf("Minuscula: %s", string);
}