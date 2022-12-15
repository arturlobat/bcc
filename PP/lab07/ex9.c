#include <stdio.h>
#include <string.h>

int main()

{
  int i, j, mp; 
  char string[5][50];
  float gasto[5], m = 0;

  for (i = 0; i < 5; i++)
  {
    printf("Modelo do carro %d: ", i + 1);

    fgets(string[i], 50, stdin);
    string[i][strlen(string[i]) - 1] = '\0';

    printf("Digite o consumo desse carro: ", i + 1);
    scanf("%f", &gasto[i]);   
    fflush(stdin);

    getchar();
  }

  for (i = 0; i < 5; i++)
  {
    if (gasto[i] > m)
    {
      m = gasto[i];
      mp = i;
    }
  }
  printf("O carro mais economico dessa lista e o %s!\n", string[mp]);
  
  printf("\n");
  for (i = 0; i < 5; i++)
  {
    printf("O modelo %s gasta %.2f litros para percorrer um total de 1000km\n", string[i], 500 / gasto[i]);
  }
}