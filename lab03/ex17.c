#include <stdio.h>
#include <math.h>

int main()
{
    float base_menor, base_maior, altura, area;
    
    printf("Digite a base menor do trapezio: ");
    scanf("%f", &base_menor);
    printf("Digite a base maior do trapezio: ");
    scanf("%f", &base_maior);
    printf("Digite a altura do trapezio: ");
    scanf("%f", &altura);
    printf("---------------------------------------\n");
    
    area=((base_menor+base_menor)*altura)/2;
    
    printf("A area do trapezio vale: %.2f", area);
    return 0;
}