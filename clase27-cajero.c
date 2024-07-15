/*hacer un programa que simule un cajero automatico
con un saldo inicial de 1000 dolares*/
#include <stdio.h>
int main()
{
    int opcion ,saldo=1000;
    float agregar,retirar;
    printf("\tBienvenido a su cajero virtual");
    printf("\n1. Ingreso en cuenta");
    printf("\n2. Retiro de fondos");
    printf("\n3. Salir");
    printf("\nElija una opcion: ");
    scanf("%d", &opcion);

    switch(opcion){
        case 1: printf("\nCuanto dinero desea ingresar en la cuenta:");
        scanf("%f", &agregar);
        saldo +=agregar;
        printf("\nSaldo actual: %i", saldo);
        break;

    case 2: printf("\nCuanto dinero desea retirar ");
    scanf("%f", &retirar);
    if (retirar>saldo){
        /////////
    }
    else{
        saldo -= retirar;
        printf("\nSaldo actual: %i", saldo);
    }
    break;


    case 3:
    break;
    default: printf("\nOpcion invalida");


    }





    return 0;
}
