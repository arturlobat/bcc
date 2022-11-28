#include <stdio.h>

int main()
{
  int v;
  printf("Digite o valor que sera sacado: ");
  scanf("%d", &v);
  int n100 = v / 100;
  v = v % 100;
  int n50 = v / 50;
  v = v % 50;
  int n20 = v / 20;
  v = v % 20;
  int n10 = v / 10;
  v = v % 10;
  int n5 = v / 5;
  v = v % 5;
  int n2 = v / 2;
  v = v % 2;
  int n1 = v / 1;
  v = v % 1;
  printf("Total de notas de 100: %d\n", n100);
  printf("Total de notas de 50: %d\n", n50);
  printf("Total de notas de 20: %d\n", n20);
  printf("Total de notas de 10: %d\n", n10);
  printf("Total de notas de 5: %d\n", n5);
  printf("Total de notas de 2: %d\n", n2);
  printf("Total de notas de 1: %d\n", n1);
  return 0;
}