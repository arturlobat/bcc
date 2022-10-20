#include <stdio.h>
#include <stdio.h>
int main() 
{
    int x, resul;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    resul=(x*3+1+(x*2)-1);
    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro vale: %d", resul);
    return 0;
}
