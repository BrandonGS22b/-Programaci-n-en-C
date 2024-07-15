/*
sentencia switch()
switch (selector) {

case etiqueta1: sentencias1; break;
case etiqueta2: sentencias2; break;
case etiqueta3: sentencias3; break;
default: sentencias

}

*/
#include <stdio.h>
int main()
{
    int numero;
    printf("Ingrese un número (1-3): ");
    scanf("%i", &numero);
    switch (numero)
    {
    case 1:printf("es el numero 1"); break;
    case 2:printf("es el numero 2"); break;
    case 3:printf("ës el numero 3"); break;
    
    default:
    printf("El número ingresado no es válido.");
        break;
    }
    /* code */
    return 0;
}
