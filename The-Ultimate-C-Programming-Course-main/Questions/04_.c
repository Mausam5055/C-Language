// ✅ Q7. Write a program to store 5 integers in an array and print them using a 
// loop.
// 🔸 Code:

#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
