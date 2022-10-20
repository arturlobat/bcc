#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, g;
    printf("Digite o angulo em radianos: \n");
    scanf("%f", &r);
    g = r*(180/3.141592);
    printf("O angulo convertido em graus vale: %.2f", g);
    return 0;
}
