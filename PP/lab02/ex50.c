#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int idade, nasc, atual;
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Ano atual: ");
    scanf("%d", &atual);
    
    nasc = atual - idade;
    
    printf("Ano de nascimento: %d", nasc);
    return 0;
}