#include <stdio.h>

int datageral(int d, int m, int a);

int main()
{
    int dia, mes, ano;
    printf("Digite uma data (dia, mes e ano, respectivamente usando a tecla space entre eles):\n");
    scanf("%d %d %d", &dia, &mes, &ano);
    datageral(dia, mes, ano); 
return 0;
}

int datageral (int d, int m, int a)
{
  switch (m)
  {
    case 1: 
      printf("%d de Janeiro de %d!", d, a);
    break;
    case 2: 
      printf ("%d de Fevereiro de %d!", d, a); 
    break;
    case 3: 
      printf("%d de Março de %d!", d, a); 
    break;
    case 4: 
      printf ("%d de Abril de %d!", d, a);
    break;
    case 5: 
      printf("%d de Maio de %d!", d, a); 
    break;
    case 6: 
      printf("%d de Junho de %d!", d, a); 
    break;
    case 7: 
      printf("%d de Julho de %d!", d, a); 
    break;
    case 8: 
      printf("%d de Agosto de %d!", d, a); 
    break;
    case 9: 
      printf ("%d de Setembro de %d!", d, a); 
    break;
    case 10: 
      printf("%d de Outubro de %d!", d, a); 
    break;
    case 11: 
      printf ("%d de Novembro de %d!", d, a); 
    break;
    case 12: 
      printf ("%d de Dezembro de %d!", d, a); 
    break;
    default: 
      printf("\nNao foi possivel atender ao comando!\n"); 
    break;
  }
}