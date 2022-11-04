#include <stdio.h>

int main()
{
    float n1, n2;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    if (n1>=0 && n1<=10 && n2>=0 && n2<=10) printf ("A media das notas vale: %.2f", (n1+n2) / 2);
        else printf ("Uma das notas nao e valida! O programa sera encerrado!");
return 0;

}