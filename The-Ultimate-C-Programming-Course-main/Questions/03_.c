// ✅ Q6. Write a program to demonstrate the use of pointers by printing the address and value of an ]
// integer variable

#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;  // pointer p stores address of a

    printf("Value of a: %d\n", a);       // 5
    printf("Address of a: %p\n", &a);    // e.g., 0x7ffee2c9b5c4
    printf("Value of p: %p\n", p);       // same as &a
    printf("Value pointed by p: %d\n", *p); // 5

    return 0;
}


