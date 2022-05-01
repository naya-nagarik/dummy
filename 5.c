/**
 * WAP to input breadth and length of a rectangle.
 * Then, print it's area and perimeter.
 */

#include <stdio.h>

int main()
{
    // Declare variables
    float length, breadth, area, perimeter;

    // Prompt user to enter length and breadth
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    while (getchar() != '\n');

    // Prompt user to enter breadth
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);
    while (getchar() != '\n');

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Print area and perimeter
    printf("\nPerimeter of rectangle is %g.\n", perimeter);
    printf("Area of rectangle is %g.\n", area);

    // Wait for user to press Enter
    printf("\nPress Enter to continue...");
    getchar();

    return 0;
}
