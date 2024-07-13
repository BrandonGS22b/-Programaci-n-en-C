/*
visualisar la tarifa de la luz segun el gasto de corriente
electrica para un gasto menor de 100kwxh
la tarifa es 1.2, entre 1000 y 1850kwxh es 1.0 
y mayor  es 1.0 y mayor de 1850kwxh 0.9
*/

#include <stdio.h>

#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main()
{
    float gasto, tasa;
    printf("Digite el total de gasto de energía: ");
    scanf("%f", &gasto);
    
    if(gasto <= 1000) {
        tasa = TARIFA1;
    } else if(gasto > 1000 && gasto <= 1850) {
        tasa = TARIFA2;
    } else if(gasto > 1850) {
        tasa = TARIFA3;
    }
    
    printf("La tasa a pagar es: %.1f\n", tasa);
    return 0;
}