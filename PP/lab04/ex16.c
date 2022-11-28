#include <stdio.h>
#include <math.h>

int main() 
{
    int op = 0;
    while (op != 5) 
    {
        printf("Escolha uma opcao:\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);
        if (op == 5) 
        {
            break;
        }
        int x, y;
        printf("Digite o primeiro valor: ");
        scanf("%d", &x);
        printf("Digite o segundo valor: ");
        scanf("%d", &y);

        if (op == 1) 
        {
            printf("%d + %d = %d\n", x, y, x + y);
        } else if (op == 2) {
            printf("%d - %d = %d\n", x, y, x - y);
        } else if (op == 3) {
            printf("%d * %d = %d\n", x, y, x * y);
        } else if (op == 4) {
            printf("%d / %d = %d\n", x, y, x / y);
        } else 
        {
            printf("Opcao inválida!\n");
        }
    }
}