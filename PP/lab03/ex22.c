#include <stdio.h>

int main()
{
    int id, tempo;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &id);

    printf("Digite o tempo de servico do trabalhador: ");
    scanf("%d", &tempo);

    if (id >= 65 || tempo >= 30 || (id >= 60 && tempo>= 25)) 
    {
        printf("Pode se aposentar.");
    } else {
        printf("Nao pode se aposentar.");
    }

    return 0;
}