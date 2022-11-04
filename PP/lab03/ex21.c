#include <stdio.h>

int main()
{
    int op;
    float n1, n2;

    printf("Escolha uma opçao:\n");
    printf("1-Soma\n");
    printf("2-Diferenca\n");
    printf("3-Produto\n");
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
            printf("A soma vale: %f", n1 + n2);
            break;
        case 2:
            printf("A diferenca vale: %f", n1 - n2);
            break;
        case 3:
            printf("O produto vale: %f", n1 * n2);
            break;
        case 4:
            if (n2 != 0) 
            {
                printf("A divisao vale: %.2f", n1 / n2);
            } else {
                printf("Denominador nao pode ser zero!");
            }
            break;
        default:
            printf("Opcao invalida!");
    }

    return 0;
}