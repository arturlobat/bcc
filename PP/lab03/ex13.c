#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2, n3, md;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    md = (n1 + n2 + (n3*2)) / 4; 
 
    if (md >= 60 ) 
    printf("A media das notas vale: %.2f. Estudante aprovado!", md);
    else printf("A media das notas vale: %.2f. Estudante reprovado!", md);

    return 0;
}
