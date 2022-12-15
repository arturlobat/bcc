#include <stdio.h>

int main()

{
  int a;
  char string[100];
  
  printf("Digite a frase com letras minusculas: ");

  fgets(string, 100, stdin);
  for (a = 0; string[a] != '\0'; a++)
  {
    if (string[a] >= 'a' && string[a] <= 'z')
    {
      string[a] -= 32;
    }
  }
  
  printf("Aqui esta e mesma frase mas em letras maiusculas: %s", string);
}