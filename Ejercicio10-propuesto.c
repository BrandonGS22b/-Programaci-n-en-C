#include <stdio.h>
#include <math.h>

int main()
{
    double num, raiz;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%lf", &num);

    // Verificar si el número es negativo
    if (num < 0) {
        printf("%.2f es un numero negativo. Raiz imaginaria.\n", num);
    } else {
        // Calcular la raíz cuadrada
        raiz = sqrt(num);
        printf("La raiz cuadrada de %.2f es %.2f\n", num, raiz);
    }

    return 0;
}
