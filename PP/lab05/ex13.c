#include <stdio.h>

float mini_calc(float x, float y, char operacao);

void main()
{
    float x, y;
    char operacao;
    
    printf("De os numeros e o sinal da operacao: ");
    scanf("%f %f %c", &x, &y, &operacao);
    printf("%.2f\n", mini_calc(x, y, operacao));
}

float mini_calc(float x, float y, char operacao)
{
    if (operacao == '+')
    {
        return x + y;
    }
    else if (operacao == '-')
    {
        return x - y;
    }
    else if (operacao == '*')
    {
        return x * y;
    }
    else if (operacao == '/')
    {
        return x / y;
    }
    else
    {
        return 0;
    }
}