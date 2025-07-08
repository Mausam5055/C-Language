// Q12. Calculate the area of a rectangle. Take length and width as input.
#include <stdio.h>

int main() {
    float length, width, area;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = length * width;

    printf("Area of rectangle = %.2f\n", area);

    return 0;
}
