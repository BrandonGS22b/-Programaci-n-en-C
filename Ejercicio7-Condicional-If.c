/*
comprobar si un numero digitado por el usuario 
es positivo o negativo
*/

#include "stdio.h"

int main()
{

    float x;

    printf("Ingrese un numero: ");
    scanf("%f", &x);
    
    if (x > 0)
    {
        printf("El numero es positivo.\n");
    }
    else if (x < 0)
    {
        printf("El numero es negativo.\n");
    }

    /* code */
    return 0;
}
