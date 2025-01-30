#include <stdio.h>  // Correct include directive for the standard input-output library

int main() {  // Correct definition of the main function
    int n;  // Declare a variable to store user input

    printf("Enter the code: ");  // Print prompt for user input
    scanf("%d", &n);  // Read integer input from the user

    printf("Message for you: ");  // Print header for the message

    if (n == 2) {
        printf("Love you Tanisha\n");  // Print message if n equals 2
    } else if (n == 3) {
        printf("Love you so much Tanishka\n");  // Print message if n equals 3
    } else if (n == 4) {
        printf("I hate you Tanishka\n");  // Print message if n equals 4
    } else {
        printf("Invalid code\n");  // Print message if n is not 2, 3, or 4
    }

    return 0;  // End of the program
}
