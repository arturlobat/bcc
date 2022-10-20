#include <stdio.h>

int main() 
{
  int n, ant, suc;
  printf("Informe um numero inteiro: "); //usuário dando os dados
  scanf("%d", &n); //captura
  //cálculos
  ant = n - 1; 
  suc = n + 1;
  //resultados
  printf("%d (antecessor), ", ant);
  printf("%d (valor), ", n);
  printf("%d (sucessor).", suc);
  
  return(0);
}