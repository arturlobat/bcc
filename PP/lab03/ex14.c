#include <stdio.h>

int main()

{
    float n1, n2, n3, media;

    printf("Digite a primeira nota(trabalho de lab): ");
    scanf("%f", &n1);
    printf("Digite a segunda nota(av. semestral): ");
    scanf("%f", &n2);
    printf("Digite a terceira nota(ex. final): ");
    scanf("%f", &n3);

    media = ((n1*2) + (n2*3) + (n3*5)) / 10;

    if (media >= 0 && media <= 2.9) printf("A media e: %f. O aluno foi reprovado.", media);
    else if (media >= 3 && media <= 4.9) printf("A media e: %f. O aluno está de recuperaçao.", media);
    else if (media >= 5 && media <= 10) printf("A media e: %f. O aluno foi aprovado.", media);
    else printf("Uma das notas nao e valida.");

    return 0;
}