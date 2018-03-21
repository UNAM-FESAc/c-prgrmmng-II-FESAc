
#include <stdio.h>
#include <stdlib.h>
 
int main () 
{
  FILE * archivo;
  
  char nom[] = "licencia.est";
  

  archivo = fopen ( nom, "a" );
  
 
  fclose ( archivo );


  return 0;
}

