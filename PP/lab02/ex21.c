#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lib, kg;
    printf("Digite a massa em libras: ");
    scanf("%f", &lib);
    kg=lib*0.45;
    printf("A massa convertida em quilogramas vale: %.2f", kg);
    return 0;
}
