#include <stdio.h>

int main() {
    float length, width, perimeter;

    // Ask the user for length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate perimeter
    perimeter = 2 * (length + width);

    // Display the result
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}