#include <stdio.h>

union numero{
   unsigned int entero;
   
   struct{
      unsigned char d;
      unsigned char c;
      unsigned char b;
      unsigned char a;
    } bytes;
};

int main(void){
   union numero n;
   n.entero = 0x11223344;

   printf("\n %x-%x-%x-%x\n", n.bytes.a, n.bytes.b, n.bytes.c, n.bytes.d);
   printf("\n %d-%d-%d-%d\n", n.bytes.a, n.bytes.b, n.bytes.c, n.bytes.d);

   return 0;   
}
