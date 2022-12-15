#include <stdio.h>

int main()

{
  char string[10];
  int x;
  int contador = 0;


  printf("Digite qualquer numero binario: ");

  fgets(string, 10, stdin);

  for (x = 0; string[x] != '\0'; x++)
  {
    if (string[x] == '1')
    {
      contador++;
    }
  }

  printf("Existem %d numeros um (1's) nesse numero!\n", contador);

}