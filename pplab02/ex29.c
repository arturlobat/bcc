#include<stdio.h>
#include<stdlib.h>

int main()
{
  float n1, n2, n3, n4, media; //variáveis
 
  //dados recebidos
  printf("Digite a primeira nota: ");
  scanf("%f",&n1);
  
  printf("Digite a segunda nota: ");
  scanf("%f",&n2);
  
  printf("Digite a terceira nota: ");
  scanf("%f",&n3);
  
  printf("Digite a quarta nota: ");
  scanf("%f",&n4);
  
  //cálculo da média
  media = (n1 + n2 + n3 + n4) / 2;
  
  //saída
  printf("Media do aluno = %.4f\n",media);
  return 0;
}