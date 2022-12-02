#include <stdio.h>

int dobro (int n);

int main ()
{
int num;

printf ("Digite o valor que sera dobrado: ");
scanf ("%d", &num);

printf ("O dobro de %d vale %d!", num, dobro(num));
}
int dobro (int n)
{
return n*2;
}