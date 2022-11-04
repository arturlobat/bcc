#include <stdio.h>

int main()
{
    float sal, vlpe;

    printf("Informe o salario e a prestacao, respectivamente: ");
    scanf("%f %f", &sal,&vlpe);

  if (vlpe > sal * 0.2) printf("Emprestimo nao concedido!");
    else printf("Emprestimo concedido!");

return 0;

}