#include <stdio.h>


struct book
{
    char title[20];
    char author[20];
    float id;
}book;

typedef struct book Book;

void printBook(Book *book)
{
    printf("¡¶%s¡·\n(%s,%.2f)", book->title,book->author,book->id);

};


int main()
{
   int a;
   Book book1 =
   {
   "Å¶",
   "ÄÅ",
   12.0f
   };
   book1.id=24.0f;
printBook(&book1);
    return 0;
}
