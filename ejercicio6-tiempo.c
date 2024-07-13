/*
calcular la cantidad de segundos que estan incluidos en el numero
de horas , minutos y segundos ingresados por el usuario
*/

#include <stdio.h>

int main()
{
    int hours, minutes, seconds,t1,t2,t3, totalSeconds;
    
    printf("Digite el numero de horas:");

    scanf("%i", &hours);
    printf("Digite el numero de minutos:");
    scanf("%i", &minutes);
    printf("Digite el numero de segundos:");
    scanf("%i", &seconds);
    
    // transformar horas, minutos y segundos a segundos
    t1 = hours * 3600;
    t2 = minutes * 60;
    t3 = seconds *1;
    
    // sumar los segundos en horas, minutos y segundos
    
    
    // sumar todos los segundos
    totalSeconds = t1 + t2 + t3;
    
    printf("La cantidad de segundos es: %i", totalSeconds);
    
   
    
    
    /* code */
    return 0;
}
