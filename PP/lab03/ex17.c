#include <stdio.h>

int main()

{
    float alt, ar, basema, baseme;

    printf("Informe a base maior: ");
    scanf("%f", &basema);

    printf("Informe a base menor: ");
    scanf("%f", &baseme);

    printf("Informe a altura: ");
    scanf("%f", &alt);

    if (basema > 0 && baseme > 0) 
    {
     ar = ((basema + baseme) * alt) / 2;
    printf("A area do trapezio vale: %.2f", ar);
    } else 
    {
    printf("Impossivel calcular se uma das bases valer zero!");
    }
    
    return 0;
}