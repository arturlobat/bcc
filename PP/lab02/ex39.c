#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float x=780.000;
    float primeiro, segundo, terceiro;
    
    primeiro=(x*0.46);
    segundo=(x*0.32);
    terceiro=(x*0.22);
    
    printf("O primeiro ganhador tera a seguinte quantia em maos: %.3f\n", primeiro);
    printf("O segundo ganhador tera a seguinte quantia em maos: %.3f\n", segundo);
    printf("O terceiro ganhador tera a seguinte quantia em maos: %.3f\n", terceiro);
    
return 0;
}