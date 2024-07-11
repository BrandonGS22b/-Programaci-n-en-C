#include <stdio.h>
#include <math.h>

int main() {
    float x, y;

    printf("Informe o lado 1 do triangulo: ");
    scanf("%f", &x);
    printf("Informe o lado 2 do triangulo: ");
    scanf("%f", &y);

    float hypotenusa = sqrt(x * x + y * y);

    printf("Resultado de la hypotenusa: %f\n", hypotenusa);

    return 0;
}
