#include <stdio.h>

int main()

{
  char string[500];

  printf("Digite uma frase:\n");
  fgets(string, 500, stdin);
  printf("%s", string);

return 0;
}