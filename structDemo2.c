#include <stdio.h>
int main()
{
    struct book_bank
    {
        char title[20];
        char author[25];
        int pages;
        float price;
    };
    struct book_bank book1, book2, book3;
    printf("Enter the title for the book:\n");
    scanf("%s %s %s", book1.title, book2.title, book3.title);
    printf("Enter the author name:\n");
    scanf("%s %s %s", book1.author, book2.author, book3.author);
    printf("Enter the total no of pages:\n");
    scanf("%d %d %d", &book1.pages, &book2.pages, &book3.pages);
    printf("Enter the price of the book\n");
    scanf("%f %f %f", &book1.price, &book2.price, &book3.price);
}
