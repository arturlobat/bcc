#include <stdio.h>
#include <string.h>

int main()

{
  char string[200];
  char c;
  int a;
  int x = 0;

  printf("Digite uma palavra ou frase de ate duzentos caracteres: "); 
  fgets(string, 200, stdin);
  scanf("%c", &c);

  for (a = 0; string[a] != '\0'; a++)
  {
    if (string[a] == 'a' || string[a] == 'e' || string[a] == 'i' || string[a] == 'o' || string[a] == 'u')
    {
      string[a] = c;
      x++;
    }
  }

  printf("Essa string tem %s vogais!\n", x);
  printf("%s", string);
}