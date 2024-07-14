/*Ingrese por teclado el nombre y el signo de cualquier persona e imprima,
el nombre solo si la persona es signo aries, caso contrario 
imprima no es signo aries*/


#include <stdio.h>

int main() {
char nombre[30],signo[30];
    printf("Ingrese su nombre: ");
    gets(nombre);
    
    printf("Ingrese su signo de zodiac: ");
    gets(signo);
    
    if (strcmp(signo, "aries") == 0) {
        printf("El nombre ingresado es %s\n", nombre);
    } else {
        printf("No es signo aries\n");
    }
    return 0;
}