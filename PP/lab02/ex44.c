#include <stdio.h>
#include <stdlib.h>
int main() 
{
    
    int degrau,altura,alt;
    float degraus;
    
    printf("Informe a altura do degrau em cm: ");
    scanf("%d",&degrau);
    printf("Informe a altura que deseja alcançar em m: ");
    scanf("%d",&altura);
    alt=altura*100;
    degraus=alt/degrau;
    printf("O usuario devera subir: %.0f degraus.", degraus);
    
    return 0;
}