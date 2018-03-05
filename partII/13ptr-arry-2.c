/*
Comente la linea de inicializacion del apuntador y observe
lo que sucede.

Fije el numero de elementos del arreglo y comente su observacion.
*/

#include<stdio.h>

int main(void)
{
  int mi_arreglo[] = {-1, 2, -3, 4, -5}, * ptr, i;

  // Omite & y [0], observa lo que sucede, Explicalo.
  ptr=&mi_arreglo[0];
  /*
Es importante resaltar que el nombre del primer arreglo es
la direccion del primer elemento que contiene el arreglo
*/

  for (i = 0; i < 5; i++)
    {
      printf("\t\t ptr + %d = %d\n ", i, * (ptr + i) );
      printf("\n mi_arreglo[%d] = %d\n ", i, mi_arreglo[i]);
    }
  return 0; }

/*
Observa y compara los codigos cuando el arreglo es una cadena
de caracteres y cuando son enteros.

El ejercicio del estudiante consiste en responder:
Por que mi_arreglo = ptr, es diferente de lo inverso.

*/
