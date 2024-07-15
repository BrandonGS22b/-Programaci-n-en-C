/*
dada una nota de un examen mediante un codigo
escribir el literal que le corresponde a la nota
*/

#include <string.h>
int main()
{
   char nota;
   printf("digite la nota:");
   scanf("%c",&nota);
   
   switch(nota){

    case 'A': printf("excelente"); break;
    case 'B': printf("bueno"); break;
    case 'C': printf("aprobado"); break;
    case 'D': printf("reprobado"); break;
    default: printf("la nota debe estar entre A y D"); break;

    
   }
    return 0;
}
