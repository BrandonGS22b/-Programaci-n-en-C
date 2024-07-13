/*
Dadas las horas trabajadas de una persona y el valor por hora
Calcular su salario e imprimirlo
*/
#include <stdio.h>

int main()
{
    float horas_trabajadas, valor_por_hora;
    float salario_diario, salario_mensual;

    printf("Por favor ingresar la cantidad de horas trabajadas por día: ");
    scanf("%f", &horas_trabajadas);
    printf("Por favor ingresar el valor por hora: ");
    scanf("%f", &valor_por_hora);

    salario_diario = horas_trabajadas * valor_por_hora;
    salario_mensual = salario_diario * 30; // Asumiendo 30 días de trabajo

    printf("El salario mensual es: %.3f\n", salario_mensual);

    return 0;
}
