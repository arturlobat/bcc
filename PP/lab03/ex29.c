#include <stdio.h>
#include <math.h>
#include <time.h>

int main ()
{
    int a, b, s = 0, r;
    
    srand(time(NULL));
    a = rand () % 100;
    b = rand() % 100;
    printf("1- %d + %d:\n", a, b);
    printf("Digite sua resposta:\n");
    scanf("%d", &r);

    if (r == (a + b)){
        printf("Acertou!\n");
        s++;
    }
    else{
        printf("Errou!\n");
    }


    a = rand () % 100;
    b = rand() % 100;
    printf("2- %d + %d:\n", a, b);
    printf("Digite sua resposta:\n");
    scanf("%d", &r);

    if (r == (a + b)){
        printf("Acertou!\n");
        s++;
    }
    else{
        printf("Errou!\n");
    }


    a = rand () % 100;
    b = rand() % 100;
    printf("3- %d + %d:\n", a, b);
    printf("Digite sua resposta:\n");
    scanf("%d", &r);


    if (r == (a + b)){
        printf("Acertou!\n");
        s++;
    }
    else{
        printf("Errou!\n");
    }


    a = rand () % 100;
    b = rand() % 100;
    printf("4- %d + %d:\n", a, b);
    printf("Digite sua resposta:\n");
    scanf("%d", &r);

    if (r == (a + b)){
        printf("Errou!\n");
        s++;
    }
    else{
        printf("Errou!\n");
    }


    a = rand () % 100;
    b = rand() % 100;
    printf("5- %d + %d:\n", a, b);
    printf("Digite sua resposta:\n");
    scanf("%d", &r);

    if (r == (a + b)){
        printf("Acertou!\n");
        s++;
    }
    else{
        printf("Errou!\n");
    }
    printf("Seu numero de acertos foi: %d \n", s);

  return 0;
}