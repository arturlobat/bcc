#include <stdio.h>
#include <string.h>

int main()

{
  char str1[100], str2[100], sst[100];
  char c1, c2, op;

  int i, p, tam;
  int contador = 0;

  do
  {    
    
    printf("\n(a) Ler uma string S1 (tamanho maximo 20 caracteres);\n");
    printf("(b) Imprimir o tamanho da string S1;\n");
    printf("(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao;\n");
    printf("(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao;\n");
    printf("(e) Imprimir a string S1 de forma reversa;\n");
    printf("(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuario;\n");
    printf("(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serao lidos pelo usuario;\n");
    printf("(h) Verificar se uma string S2 e substring de S1. A string S2 deve ser informada pelo usuario;\n");
    printf("(i) Retornar uma substring da string S1. Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual e o tamanho da substring.\n");
    printf("Digite a opcao desejada:\n");
    scanf("%c", &op);

    getchar();

    switch (op)
    {
    case 'a':
      printf("\nDigite a string S1:\n");
      fgets(str1, 100, stdin);
      str1[strlen(str1) - 1] = '\0';
      break;
    case 'b':
      printf("O tamanho da string S1 e %d\n", strlen(str1));
      break;
    case 'c':
      printf("\nDigite a string S2: ");
      fgets(str2, 100, stdin);
      printf(strcmp(str1, str2) ? "As strings sao diferentes\n" : "As strings sao iguais\n");
      break;
    case 'd':
      printf("\nDigite a string S2: ");
      fgets(str2, 100, stdin);
      printf("O resultado da concatenacao e \"%s\"\n", strcat(str1, str2));
      break;
    case 'e':
      for (i = strlen(str1) - 1; i >= 0; i--)
      {
        printf("%c", str1[i]);
      }
      printf("\n");
      break;
    case 'f':
      printf("\nDigite o caractere: ");
      scanf(" %c", &c1);
      for (i = 0; str1[i] != '\0'; i++)
      {
        if (str1[i] == c1)
        {
          contador++;
        }
      }
      printf("\nO caractere %c aparece %d vezes na string S1\n", c1, contador);
      break;
    case 'g':
      printf("\nDigite o caractere C1: ");
      scanf(" %c", &c1);
      printf("\nDigite o caractere C2: ");
      scanf(" %c", &c2);
      for (i = 0; str1[i] != '\0'; i++)
      {
        if (str1[i] == c1)
        {
          str1[i] = c2;
          break;
        }
      }
      printf("A string S1 agora e %s\n", str1);
      break;
    case 'h':
      printf("\nDigite a string S2: ");
      fgets(str2, 20, stdin);
      if (strstr(str1, str2) != NULL)
      {
        printf("A string S2 e substring de S1\n");
      }
      else
      {
        printf("A string S2 nao e substring de S1\n");
      }
      break;
    case 'i':
      printf("\nDigite a posicao: ");
      scanf("%d", &p);
      printf("\nDigite o tamanho: ");
      scanf("%d", &tam);
      
      for (i = p; i <= tam; i++)
      {
        sst[i] = str1[p + i];
      }
      sst[i + 1] = '\0';

      printf("A substring e %s\n", sst);
      break;
    }

  } while (op >= 'a' || op <= 'i');
}