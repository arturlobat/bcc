#include <stdio.h>

int main()

{
  char string[500];
  int contrario;

  fgets(string, 500, stdin);

  for (contrario = 0; string[contrario] != '\0'; contrario++)
  {
  }
  for (contrario--; contrario >= 0; contrario--)
  {
    printf("%c", string[contrario]);
  }

return 0;
}