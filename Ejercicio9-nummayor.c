//calcular o decir cual de los dos numeros ingresados es el mayor y si se ingresa 2 iguales mandar por consola

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    if(num1>num2){
        printf("El numero %i es mayor que %i\n", num1, num2);
    }
    else if(num2<num1){
        printf("El numero %i es mayor que %i\n", num2, num1);



    }
    else{
        printf("Los numeros ingresados son iguales\n");
    }	
    /* code */
    return 0;
}
