#include <stdio.h>

int main()
{
    int hora_chegada, minuto_chegada, hora_partida, minuto_partida, tempo_chegada, tempo_partida, tempo_permanencia, horas_permanencia;
    float total_pagar = 0;

    printf("Horas e minutos da partida: ");
    scanf("%d %d", &hora_partida, &minuto_partida);

    printf("Horas e minutos da chegada: ");
    scanf("%d %d", &hora_chegada, &minuto_chegada);

    if (hora_chegada > hora_partida) hora_chegada -= 24;

    tempo_chegada = hora_chegada * 60 + minuto_chegada;
    tempo_partida = hora_partida * 60 + minuto_partida;
    tempo_permanencia = tempo_partida - tempo_chegada;

    if (tempo_permanencia % 60 > 0) {
        horas_permanencia = tempo_permanencia / 60 + 1;
    } else {
        horas_permanencia = tempo_permanencia / 60;
    }

    if (horas_permanencia <= 2) {
        total_pagar = horas_permanencia * 1;
    } else if (horas_permanencia <= 4) {
        total_pagar = horas_permanencia * 1.4;
    } else {
        total_pagar = horas_permanencia * 2;
    }

    printf("O total a pagar sera de R$%.2f!", total_pagar);

    return 0;
}