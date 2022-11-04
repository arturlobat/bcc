#include <stdio.h>
#include <math.h>

int main()
{
    int num;  

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num %3 == 0) 
    {
    printf("Ele e divisivel por 3.");
    }
    else{
        if (num % 5 == 0)
        printf("Eh divisivel por 5\n");
        printf("Nao e divisivel por nenhum!");
    }





















}