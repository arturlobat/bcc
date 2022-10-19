#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{    
    int n1,n2,n3,soma;
printf("Digite o primeiro numero:\n");
scanf("%d",&n1);
printf("Digite o segundo numero:\n");
scanf("%d",&n2);
printf("Digite o terceiro numero:\n");
scanf("%d",&n3);

soma = n1+n2+n3;
printf("A soma dos numeros é: %d.",soma);
return 0;
}