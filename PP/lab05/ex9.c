#include <stdio.h>

float vol_cil (float r, float a);

int main()
{

float r, a;

printf ("Digite a altura e o raio do cilindro, respectivamente (tecle space entre eles):  ");
scanf ("%f %f", &r, &a);
printf("\n%.2f\n", vol_cil(r, a));

}

float vol_cil (float r, float a)

{
printf ("Volume do cilindro = ");
return 3.141592 * r * r * a;
}