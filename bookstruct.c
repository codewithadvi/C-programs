#include <stdio.h>

struct Book {
    char title[50];
    char author[100];
    int price;
};

int main() {
    struct Book books[3];
    int most_expensive_index = 0;
    int lowest_priced_index = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Book Title: ");
        scanf("%[^\n]", books[i].title);
        getchar(); // Consume the newline after this input

        printf("Author Name: ");
        scanf("%[^\n]", books[i].author);
        getchar(); // Consume the newline after this input

        printf("Price of the Book: ");
        scanf("%d", &books[i].price);
    }

    // Find the most expensive and lowest priced books
    for (int i = 1; i < 3; i++) {
        if (books[i].price > books[most_expensive_index].price) {
            most_expensive_index = i;
        }
        if (books[i].price < books[lowest_priced_index].price) {
            lowest_priced_index = i;
        }
    }

    // Display most expensive book
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", books[most_expensive_index].title);
    printf("Author: %s\n", books[most_expensive_index].author);
    printf("Price: %d\n", books[most_expensive_index].price);

    // Display lowest priced book
    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", books[lowest_priced_index].title);
    printf("Author: %s\n", books[lowest_priced_index].author);
    printf("Price: %d\n", books[lowest_priced_index].price);

    return 0;
}
