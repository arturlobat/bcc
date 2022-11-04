#include <stdio.h>
#include <math.h>

int main()
{
    float a, c1, c2, c3, c4, c5, c6;
    printf("Qual foi o valor das vendas?\n");
    scanf("%f", &a);

    if (a >= 100.000){
        c1 = 700.0 + (a * 1.16);
        printf("A comissao sera de:\n %.2f \n", c1);
    }
    if ((a >= 80.000) && (a < 100.000))
    {
        c2 = 650.0 + (a * 1.14);
        printf("A comissao sera de:\n %.2f \n", c2);
    }
    if ((a >= 60.000) && (a < 80.000))
    {
        c3 = 600 + (a * 1.14);
        printf("A comissao sera de:\n %.2f \n", c3);
    }
    if ((a >= 40.000) && (a < 60.000))
    {
        c4 = 550 + (a * 1.14);
        printf("A comissao sera de:\n %.2f \n", c4);
    }
    if ((a >= 20.000) && (a < 40.000))
    {
        c5 = 500 + (a * 1.14);
        printf("A comissao sera de:\n %.2f \n", c5);
    }
    if (a < 20.000)
    {
        c6 = 400 + (a * 1.14);
        printf("A comissao sera de:\n %.2f \n", c6);
    }

return 0;
}