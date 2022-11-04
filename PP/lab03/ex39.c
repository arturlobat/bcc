#include <stdio.h>
#include <stdlib.h>

int main()

{
    int tempo;
    float sal, r, b;

    printf("Informe o salario atual: ");
    scanf("%f", &sal);

    printf("Informe o tempo de servico (anos): ");
    scanf("%d", &tempo);

    if (sal <= 500) r = 0.25;
    else if (sal <= 1000) r = 0.20;
    else if (sal <= 1500) r = 0.15;
    else if (sal <= 2000) r = 0.10;
    else r = 0;
    
    if (tempo<1) b = 0;
    else if (tempo<=3) b =100;
    else if (tempo<=6) b =200;
    else if (tempo<=10) b =300;
    else b = 500;

    printf("O salario reajustado sera de: %.2f", sal * (1 + r) + b);

    return 0;
}   






























}

