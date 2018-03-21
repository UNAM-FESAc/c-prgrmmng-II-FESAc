
#include <stdio.h>
 
int main () 
{
  FILE *archivo;
  
  char caracter;
  
  archivo = fopen ( "prueba.txt", "a" );
  
 
  fclose ( archivo );


  return 0;
}

