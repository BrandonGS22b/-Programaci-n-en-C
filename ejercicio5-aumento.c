/*
calcular el nuevo salario de un obrero si obtuvo un incremento del 25%


 */


#include <stdio.h>
int main()
{
    float salario,aumento,salario_final;
    printf("Ingrese el salario actual del obrero: ");
    scanf("%f", &salario);
    aumento = salario * 0.25;
    salario_final = salario + aumento;
    printf("El nuevo salario del obrero es: %.2f\n", salario_final);


    /* code */
    return 0;
}
