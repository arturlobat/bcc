#include <stdio.h>

int main()
{
    char string[200];
    int i, x;
    int o = 0;
    int p = 0;

    printf("Digite uma frase: ");
    fgets(string, 250, stdin);
    x = strlen(string);

    printf("\n");

    for (i = 0; i < x; i++) 
    {
        while (string[i] == 32)
        {
            for (o = i; o < x - 1; o++)
            {
                string[o] = string[o + 1];
            }
            string[o] = '\0';
        }
    }

    x = strlen(string) - 1;

    for(i = 0; i < x; i++)
    { 
        printf("Posicao %d = %c | Posicao %d = %c\n", i, string[i], x - i - 1, string[x - i - 1]);
        
        if(string[i]!=string[x-i-1]){
            p = 1;
        }   
        printf("\n");
    }    
    if(p == 0)
    {
        printf("E um palindromo!\n");
    }
    else
    {
        printf("Nao e um palindromo!\n");
    }
return 0;
}