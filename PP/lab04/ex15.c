#include <stdio.h>
#include <math.h>

int main() 
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    while (valor > 0) 
    {
        printf("O quadrado de %d vale %d\n", valor, valor * valor);
        printf("O cubo (3) de %d vale %d\n", valor, valor * valor * valor);
        printf("A raiz quadrada de %d vale %.2f\n", valor, sqrt(valor));
        printf("Digite um valor:\n");
        scanf("%d", &valor);
    }


return 0;
}