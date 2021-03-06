#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books book);

int main()
{
    struct Books book1;

    strcpy(book1.title, "C programming");
    strcpy(book1.author, "Jay Prakash Mandal");
    strcpy(book1.subject, "Comp 103");
    book1.book_id = 2535365;

    printBook(book1);

    return 0;
}

void printBook(struct Books book)
{
    printf("Title of the book: %s\n", book.title);
    printf("Author of the book: %s\n", book.author);
    printf("Subject: %s\n", book.subject);
    printf("Id of the book: %d\n", book.book_id);
}
