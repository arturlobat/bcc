#include <stdio.h>


float media(float n1, float n2, float n3, char letra);

int main()
{
char letra;
float n1, n2, n3;

scanf("%f %f %f %c", &n1, &n2, &n3, &letra);
printf("%.2f\n", media(n1, n2, n3, letra));
}

float media(float n1, float n2, float n3, char letra)

{

  if (letra == 'P')
    {
        return ((n1*5) + (n2*3) + (n3*2)) / 10;
    }
  else if (letra == 'A')
  {
        return (n1 + n2 +n3) / 3;
  }
  else 
  {
    return 0;
  }
}