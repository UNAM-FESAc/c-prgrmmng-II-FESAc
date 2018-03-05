#include<stdio.h>
#define N 20

main(){
char cadena[N]; 

int longitud();

printf ("\nDame una cadena (maximo N): ");
gets(cadena);

printf ("\nLa cadena %s tiene %d caracteres (incluyendo espacios y otros)\n", cadena, longitud(cadena));

}

int longitud(char *s){ 
int i= 0;
while (*s++ != '\0')
{
i++;
}
return i; 
}
/*
El estudiante debe realizar el ejercicio 13 de
GitHub/practice-works/classworks.txt
*/
