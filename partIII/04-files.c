
#include <stdio.h>
#include <stdlib.h>
 
int main () 
{
  FILE * archivo1, * archivo2;
  
  
  archivo1 = fopen ( "archiv1.dat", "at" );
  archivo2 = fopen ( "archiv2.txt", "at" );
 
  fclose ( archivo1 );
  fclose ( archivo2 );

  return 0;
}

