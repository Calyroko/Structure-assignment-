/* author : caleb maroko
asssignment work
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char title[30];
    char author[30];
    int publication_year;
    char isbn[13];
    float price;
} book_t;

int main() {
    // Declare and initialize the book structure
    book_t my_book = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "780131103627",
        49.99
    };

    // Print the values of the fields
    printf("Title: %s\n", my_book.title);
    printf("Author: %s\n", my_book.author);
    printf("Publication Year: %d\n", my_book.publication_year);
    printf("ISBN: %s\n", my_book.isbn);
    printf("Price: $%.2f\n", my_book.price);

    return 0;
}
