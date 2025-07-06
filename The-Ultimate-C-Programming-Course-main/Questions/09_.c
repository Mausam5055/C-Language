// ✅ Q9. Write a program to define a struct called Book with members: title,
// author, and price. Input and print one book’s details.

#include <stdio.h>

// Define the structure
struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b;

    printf("Enter book title: ");
    gets(b.title);  // or use fgets(b.title, 50, stdin);

    printf("Enter author name: ");
    gets(b.author);  // or use fgets(b.author, 50, stdin);

    printf("Enter book price: ");
    scanf("%f", &b.price);

    // Display the details
    printf("\nBook Details:\n");
    printf("Title : %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price : ₹%.2f\n", b.price);

    return 0;
}

