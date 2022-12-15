#include <stdio.h>

int main()

{
  char string[50];
  int i, j;

  printf("Digite uma string qualquer: ");
  fgets(string, 50, stdin);
  printf("Dois inteiros positivos quaisquer: ");
  scanf("%d %d", &i, &j);
  
  for (;i <= j; i++);
  {
    printf("%c", string[i]);
  }
  printf("\n");
}