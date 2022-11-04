#include <stdio.h>

int main() 

{

    int dias_da_semana;
    printf("Digite um numero entre 1 e 7: ");
    scanf("%d", &dias_da_semana);

    switch (dias_da_semana)
    {
        case 1:
            printf("Domingo!");
            break;
        case 2:
            printf("Segunda-feira!");
            break;
        case 3:
            printf("Terça-feira!");
            break;
        case 4:
            printf("Quarta-feira!");
            break;
        case 5:
            printf("Quinta-feira!");
            break;
        case 6:
            printf("Sexta-feira!");
            break;
        case 7:
            printf("Sabado!");
            break;
        default:
            printf("O numero e invalido!");
            break;
    }

    return 0;
}
