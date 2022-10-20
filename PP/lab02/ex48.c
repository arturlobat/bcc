#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int seg, h, min, r;
    printf("Digite um valor em segundos: ");
    scanf("%d", &seg);
    
    h =(seg-(seg%3600))/3600;    
    r =(seg%3600);
    min =(r-(r%60))/60;
    r =(r%60);
    seg =r;

    printf("Sao %d hora(s), %d minuto(s) e %d segundo(s).", h, min, seg);
    
    return 0;
}