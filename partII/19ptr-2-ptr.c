/*
Apuntadores a apuntadores
*/

#include <stdio.h>

int main() 
{
// declaracion de una variable, un apuntador y un apuntador de un apuntador
    int i, * ptr_i, ** ptr_ptr_i;

// Referenciar la direccion de un apuntador a un apuntador
    ptr_ptr_i = &ptr_i;
// Referenciar la direccion de memoria de un entero a un apuntador
    ptr_i = &i;
// Definicion de i
    i = 10;
// Definicion del valor del apuntador (asignacion indirecta)
    * ptr_i = 20;
// Definicion del valor con doble indireccion
    ** ptr_ptr_i = 30;

printf("Valor de i = %d, * ptr_i = %d y de ** ptr_ptr_i = %d\n",i ,* ptr_i, ** ptr_ptr_i);

    return 0;
}

/*
Comenta tu analisis y conclusiones.
*/
