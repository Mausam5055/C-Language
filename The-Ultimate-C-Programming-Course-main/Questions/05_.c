// ✅ Q8. Write a program to input a string from the user and print it using
//gets() and puts().

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // Not safe for large inputs, but okay for practice

    printf("You entered: ");
    puts(str);  // prints with newline

    return 0;
}
