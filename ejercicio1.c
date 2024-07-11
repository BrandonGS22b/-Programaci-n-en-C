/*1. Pedir 2 numeros al usuario y sumarlos , restarlos, multiplicarlos y dividirlos */

#include <stdio.h>

int main() {
    float x, y;
    float suma, resta, multiplicacion, division;


printf("Ingrese el primer numero: ");
    scanf("%f", & x);

    printf("Ingrese el segundo numero: ");
    scanf("%f", & y);

    suma = x + y;
    resta = x - y;
    multiplicacion = x + y ;
    division = x / y;

    printf("La suma es: %.0f\n", suma);
    printf("La resta es: %.0f\n", resta);
    printf("La multiplicacion es: %.0f\n", multiplicacion);
    printf("La division es: %.0f\n", division);

    return 0;
}


