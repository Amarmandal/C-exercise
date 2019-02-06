#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books *book);

int main()
{
    struct Books book1;
    /* book1 specification */
    strcpy(book1.title, "C programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C programming Tutorials");
    book1.book_id = 153646;

    printBook(&book1);

    return 0;
}

void printBook(struct Books *book)
{
    printf("Book title: %s\n", book->title);
    printf("Book author: %s\n", book->author);
    printf("Book Subject: %s\n", book->subject);
    printf("Book book_id: %d\n", book->book_id);
}
