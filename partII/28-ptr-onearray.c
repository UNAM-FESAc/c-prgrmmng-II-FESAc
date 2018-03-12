#include<stdio.h>

int main(){
  int * ptr_x, *ptr_y;
  int a[5] = {50, 40, 30, 20, 10};
  ptr_x = &a[0];
  ptr_y = &a[4];

  printf("ptr_x = %X; ptr_y = %X\n", ptr_x, ptr_y);
  printf("ptr_y - ptr_x = %d\n", ptr_y - ptr_x);

  return 0;
}

/*
Reflexiona sobre la salida de este codigo. 
Implemente documentacion interna.
*/
