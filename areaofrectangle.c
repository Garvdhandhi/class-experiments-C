#include <stdio.h>

int main() {
    float length, breadth, area;

    // Taking input from user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculating area
    area = length * breadth;

    // Displaying result
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}