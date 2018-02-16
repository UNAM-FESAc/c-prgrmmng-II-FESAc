#include <stdio.h>
#include <string.h>


// Creamos un tipo de dato: struct Books{Miembros} y lo etiquetamos como BOOK
typedef struct Books{
   	char title[50], author[50], subject[100];
	int book_id;
} BOOK;
 
int main( ) {

// Delaramos book del tipo BOOK
   BOOK book;

// Inicializamos la estructura 
   strcpy( book.title, "C Programming");
   strcpy( book.author, "Nuha Ali"); 
   strcpy( book.subject, "C Programming Tutorial");
   book.book_id = 6495407;
 


   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);

   return 0;
}
