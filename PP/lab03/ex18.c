#include <stdio.h>

int main()

{
    float n1, n2;
    int op;

    printf("Escolha uma opcao:\n");
    printf("1-Soma\n");
    printf("2-Subtracao\n");
    printf("3-Multiplicacao\n");
    printf("4-Divisao\n");
    printf("Opcao: ");
    scanf("%d", &op);

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    switch (op) 
    {
        case 1:
            printf("A soma dos numeros e: %.2f", n1 + n2);
            break;
        case 2:
            printf("A subtraçao dos numeros e: %.2f", n1 - n2);
            break;
        case 3:
            printf("A multiplicacao dos numeros e: %.2f", n1*n2);
            break;
        case 4:
            printf("A divisao dos numeros e: %.2f", n1/n2);
            break;
        default:
            printf("Opcao invalida.");
    }

    return 0;
}