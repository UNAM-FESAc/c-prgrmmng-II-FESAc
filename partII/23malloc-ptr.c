/*
Programa que realiza una suma sobre los elementos de 
un arreglo

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, *ptr, sum = 0;

    printf("Ingrese el numero de elementos: ");
    scanf("%d", &num);
    
//Asignacion de memoria usando malloc
    ptr = (int*) malloc(num * sizeof(int));  
/*
IMPORTANTE:
Si el sistema operativo no puede asignar mas 
memoria para el programa, malloc() fallara 
y regresara un valor NULL. 
Aconsejable para asegurarse que la funcion malloc es exitosa.
*/
    if(ptr == NULL)                     
    {
        printf("Error! Memoria no asignada.");
        exit(0);
    }

    printf("Ingrese los elementos: ");
    for(i = 0; i < num; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    printf("Sum = %d\n", sum);
    free(ptr);
    return 0;
}
/*
Ejercicios:
- Implemente documentacion interna sobre el codigo.
- El estudiante debe reemplazar malloc por calloc y 
comentar sus resultados.
*/

