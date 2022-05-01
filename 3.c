/**
 * WAP to calculate and print simple interest.
 * Formula: SI = (P * R * T) / 100
 */

#include <stdio.h>

int main()
{
    // Declare variables
    int time;
    float principal, rate, simpleInterest;

    // Assign values
    principal = 10000.231;
    rate = 7.5;
    time = 3;

    // Calculate simple interest
    simpleInterest = principal * time * rate / 100;

    // Print the calculated simple interest
    printf("Simple interest of %g for %d years at %g%% rate is %g.\n",
           principal, time, rate, simpleInterest);

    // Wait for user to press Enter
    printf("\nPress Enter to continue...");
    getchar();

    return 0;
}
