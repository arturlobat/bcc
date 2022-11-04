#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("E um mes invalido.");
    } else if (dia < 1 || dia > 31) {
        printf("E um dia invalido.");
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30) {
            printf("E um dia invalido.");
        } else {
            printf("E uma data valida.");
        }
    } else if (mes == 2) {
        if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
            if (dia > 29) {
                printf("E um dia invalido.");
            } else {
                printf("E uma data valida.");
            }
        } else {
            if (dia > 28) {
                printf("E um dia invalido.");
            } else {
                printf("E uma data valida.");
            }
        }
    } else {
        printf("E uma data valida.");
    }

    return 0;
}