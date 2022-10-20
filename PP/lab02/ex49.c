#include <stdio.h>
#include <stdlib.h>

int main()
{
  int hora, minuto, segundo, tempoemsegundos, duracao, tempofinal, resto;
  printf("Digite o horario de inicio: ");
  scanf("%d:%d:%d", &hora, &minuto, &segundo);
  printf("Digite a duracao em segundos: ");
  scanf("%d", &duracao);
  tempoemsegundos = horarioparasegundos(hora, minuto, segundo);
  tempofinal = tempoemsegundos + duracao;
  hora = (tempofinal - (tempofinal % 3600)) / 3600;
  resto = tempofinal % 3600;
  minuto = (resto - (resto % 60)) / 60;
  resto = resto % 60;
  tempofinal = resto;
  printf("O final sera as %d hora(s), %d minuto(s) e %d segundo(s)", hora, minuto, tempofinal);
  return 0;
}
int horarioparasegundos(int hour, int minute, int second)
{
  return hour * 3600 + minute * 60 + second;
}