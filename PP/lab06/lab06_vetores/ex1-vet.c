#include <stdio.h>
 
int main() 

{
int A[6] = {1, 0, 2, -5, -2, 7};
int soma = A[0]+ A[1] + A[5];

printf("A soma vale: %d", soma);

A[4] = 100;

for (int i = 0; i < 6; i++)
     {
       printf("\n%d\n", A[i]);
     }
return 0;

}