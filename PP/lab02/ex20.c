#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg, lib;
    printf("Digite a massa em quilogramas: ");
    scanf("%f", &kg);
    lib= kg / 0.45;
    printf("A massa convertida em libras vale: %.2f", lib);
    return 0;
}
