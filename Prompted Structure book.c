// prompted structure book
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 30
#define MAX_ISBN 13

struct book {
    char title[MAX_CHAR];
    char author[MAX_CHAR];
    int publication_year;
    char ISBN[MAX_ISBN];
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
    /*
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n", myBook.price);
    */

    // Prompt the user to enter the book details
    printf("\nEnter the book details:\n");
    printf("Title: ");
    fgets(myBook.title, MAX_CHAR, stdin);
    myBook.title[strcspn(myBook.title, "\n")] = 0;

    printf("Author: ");
    fgets(myBook.author, MAX_CHAR, stdin);
    myBook.author[strcspn(myBook.author, "\n")] = 0;

    printf("Publication Year: ");
    scanf("%d", &myBook.publication_year);

    printf("ISBN: ");
    scanf("%s", myBook.ISBN);

    printf("Price: ");
    scanf("%f", &myBook.price);

    printf("\nNew Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n", myBook.price);

    return 0;
}
