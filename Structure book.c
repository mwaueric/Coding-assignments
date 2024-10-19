//Structure book
#include <stdio.h>
#include <string.h>

struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    struct book myBook = {
        .title = "Introduction to C Programming",
        .author = "John Smith",
        .publication_year = 2022,
        .ISBN = "9780131103627",
        .price = 49.99
    };

    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    return 0;
}
