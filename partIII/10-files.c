#include<stdio.h>

int main(){
  FILE * fptr;

  char cad[40] = "Bienvenidos al curso de programacion";

  fptr = fopen("10-files.txt","w");

  fputs(cad, fptr);

  fgets(cad, sizeof(cad), fptr);

  fclose(fptr);




  return 0;
}
