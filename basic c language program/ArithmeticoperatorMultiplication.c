#include <stdio.h>

int main() {
    int x, y; // Added a comma to separate variable declarations
    int Multiplication; // Variable to store the product

    // Prompt user for input and read values
    printf("Enter a value for x: ");
    scanf("%d", &x);
    
    printf("Enter a value for y: ");
    scanf("%d", &y);

    // Calculate the product
    Multiplication = x * y;

    // Print the result
    printf("The Multiplication of %d and %d is: %d\n", x, y, Multiplication);

    return 0;
}