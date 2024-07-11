/*hacer un programa que calcule areas de trapecios*/
#include <stdio.h>
int main (){

float B,b,h;
float operacion,operacion1;

printf("Ingrese la longitud de la base mayor: ");
scanf("%f",& B);

printf("Ingrese la longitud de la base menor: ");

scanf("%f",&b);

printf("Ingrese la altura del trapecio: ");

scanf("%f",&h);

operacion = (B + b) *h;

operacion1 = operacion / 2;


printf("El area del trapecio es: %.2f \n",operacion1);















}
