// Q5. Write a function that takes two numbers as arguments and returns their
//  sum. Call this function from main().

#include <stdio.h>

// Function definition
int sum(int a, int b) {
    return a + b;  // Returns the sum of a and b
}

int main() {
    int x, y;

    // Asking the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);  // Taking input

    // Calling the function and storing the result
    int result = sum(x, y);

    // Displaying the result
    printf("Sum is: %d\n", result);

    return 0;
}
