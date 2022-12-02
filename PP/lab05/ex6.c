#include <stdio.h>

int segundos(int h, int m, int s);

int main()
{
    int h, m, s;

    printf("Digite as horas, os minutos e os segundos, respectivamente(tecle space entre eles): ");
    scanf("%d:%d:%d", &h, &m, &s);
    printf("%d\n", segundos(h, m, s));
}

int segundos(int h, int m, int s)
{
    printf ("Em segundos isso vale: ");
    return h * 3600 + m * 60 + s;
}    