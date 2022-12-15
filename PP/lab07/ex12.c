#include <stdio.h>
#include <string.h>

int main()
{
  char string[100];
  int i;

  printf("Digite o que quer que seja criptografado: ");
  fgets(string, 100, stdin);
  for (i = 0; string[i] != '\0'; i++)
  {
    if (string[i] >= 'A' && string[i] <= 'Z')
    {
      string[i] = (string[i] - 'A' + 3) % 26 + 'A';
    }
    else if (string[i] >= 'a' && string[i] <= 'z')
    {
      string[i] = (string[i] - 'a' + 3) % 26 + 'a';
    }
  }
  printf("Criptografado: %s", string);
}