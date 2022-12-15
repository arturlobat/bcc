#include <stdio.h>

int main()

{
  int i;
  char string[100], letra1, letra2;

  printf("Digite uma frase: ");
  fgets(string, 100, stdin);

  printf("Digite a letra que sera subtituida e em seguida a letra que vai substituir: ");
  scanf("%c %c", &letra1, &letra2);
  
  for (i = 0; string[i] != '\0'; i++)
  {
    if (string[i] == letra1)
    {
      string[i] = letra2;
    }
  }
  printf("%s", string);
}