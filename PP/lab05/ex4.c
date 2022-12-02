#include <stdio.h>

int qpft(int number);

void main()
{
    int n;

    printf("Digite o numero que sera verificado: "); 
    scanf("%d", &n);
    
    if (qpft(n)) 
    {
    printf("E um quadrado perfeito!\n");
    }
    else 
    {
        printf("Nao e um quadrado perfeito!\n");
    }
}

int qpft(int n)
{
    int iq = 1;

    while (iq * iq < n)
        iq++;

    if (iq * iq == n)
        return 1;
    else
        return 0;
}