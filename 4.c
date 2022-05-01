/**
 * WAP to input floats and perform different operations.
 */

#include <stdio.h>

int main()
{
    // Declare variables
    float a, b;
    char op;

    // Prompt user to enter two float numbers
    printf("Enter first number and second number: ");
    scanf("%f %f", &a, &b); // Read the two float numbers
    // fflush(stdin); // Clear the input buffer (unsafe)
    while (getchar() != '\n'); // Clear the input buffer (safe)

    // Display available operations
    printf("\n+: Sum");
    printf("\n-: Difference");
    printf("\nx: Product");
    printf("\n/: Division\n");
    printf("\nWhat do you want to do ( +, -, x, / ): ");
    scanf("%c", &op); // Read the operator
    while (getchar() != '\n');

    // Perform the operation based on the operator input
    switch (op)
    {
    case '+':
        // Calculate and print sum
        printf("\nSum of %g and %g is %g.", a, b, a + b);
        break;
    case '-':
        // Calculate and print difference
        printf("\nDifference of %g and %g is %g.", a, b, a - b);
        break;
    case 'x':
        // Calculate and print product
        printf("\nProduct of %g and %g is %g.", a, b, a * b);
        break;
    case '/':
        if (b == 0) // Check if denominator is zero
        {
            printf("\nError: Division by zero is not allowed.");
        }
        else // otherwise, calculate and print quotient
        {
            printf("\nDividing %g by %g gives quotient %g.", a, b, a / b);
        }
        break;
    default:
        // Handle invalid operator input
        printf("\nWrong operator!");
    }

    // Wait for user to press Enter
    printf("\n\nPress Enter to continue...");
    getchar();

    return 0;
}
