#include <stdio.h>
 
int main()

{
int A[8];
int X, Y;

for (int i = 0; i < 8; i++)
    {
    printf("Digite o valor %d: ", i + 1);
    scanf("%d", &A[i]);
    }
printf("X: ");
scanf ("%d", &X);
printf("Y: ");
scanf ("%d", &Y);
printf ("A soma dos vetores X e Y vale: %d", A[X] + A[Y]);
return 0;
}

