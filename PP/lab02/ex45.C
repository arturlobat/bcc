#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char letra;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra);
    
    printf("Letra minuscula: %c", letra+32);
    return 0;
}