/**
 * WAP to declare and assign a value to a variable age.
 * Print it with appropriate message.
 */

// Include the standard input-output library
#include <stdio.h>

int main()
{
    // Declare an integer variable 'age' and assign it a value of 19
    int age = 19;

    // Print the value of 'age' with an appropriate message
    printf("Given age is %d.\n", age);

    // Wait for user to press Enter
    printf("\nPress Enter to continue...");
    getchar(); // This line waits for the user to press Enter

    return 0; // Return 0 to indicate successful execution
}
