#include <stdio.h>

int main()
{
    char sx;
    float peso, a;

    printf("Informe a altura: ");
    scanf("%f", &a);

    printf("Informe o sexo (M ou F): ");
    scanf(" %c", &sx);

    if (sx == 'M') peso = (72.7 * a) - 58.0;
    else if (sx == 'F') peso = (62.1 * a) - 44.7;
    else {
        printf("Sexo invalido.");
        return 0;
    }
    printf("O peso ideal vale: %.2f", peso);

    return 0;
}