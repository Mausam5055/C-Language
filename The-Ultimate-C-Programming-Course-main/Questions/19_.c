// ✅ Q19. Take a number n and print its factorial using a 
//loop

#include <stdio.h>

int main() {
    int n, i;
    int fact;  // Declaration
    fact = 1;  // Initialization

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is: %d\n", n, fact);

    return 0;
}
