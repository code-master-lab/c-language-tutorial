#include <stdio.h>

int main() {
    int x;  // Declare an integer variable to store user input

    printf("Enter the value: ");  // Prompt the user to enter a value
    scanf("%d", &x);  // Read an integer value from the user and store it in 'x'

    for (int i = 1; i <= 10; i++) {  // Loop from 1 to 10
        printf("Your value is: %d\n", x);  // Print the same value each time
    }

    return 0;  // End of the program

}

#include <stdio.h>

int main() {
    int number;  // This line declares a variable called 'number' to store the user's input.

    printf("Enter a number: ");  // This line displays a message asking the user to enter a number.
    scanf("%d", &number);  // This line reads the user's input and stores it in the 'number' variable.

    for (int i = 1; i <= 10; i++) {  // This line sets up a loop that runs 10 times.
        printf("%d ", number * i);  // This line calculates and prints each multiple of the entered number, followed by a space.
    }

    return 0;  // This line ends the program.
}