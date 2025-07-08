// ✅ Q17. Find the sum of numbers from 1 to 10 using a while loop:
#include <stdio.h>

int main() {
    int i = 1, sum = 0;

    while (i <= 10) {
        sum += i;  // sum = sum + i
        i++;
    }

    printf("Sum from 1 to 10 is: %d\n", sum);

    return 0;
}
