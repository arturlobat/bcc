#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, s=0;
   printf("Informe um numero:\n");
   scanf("%d", &num);

   if(num>0)
   {
    while(num>0)
   {
   s=s+num%10;
   num=num/10;
   }
   printf("A soma dos algarismos vale: %d", s);
   }
   else
   {
      printf("O numero e invalido");
   }
   return 0;
}