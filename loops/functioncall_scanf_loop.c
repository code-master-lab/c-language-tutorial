#include <stdio.h>

void greet(char name[]) {
    printf("\n Good morning, %s!\n", name);
    printf(" How are you?\n");
}

int main() {
    char name[50]; // Array to store the name

    // Ask the user for their name
    printf("Enter your name: ");
    scanf("%s", name); // Read the name from user input

    // Using a for loop to call greet() multiple times
    for (int i = 0; i < 3; i++) { // Loop will run 3 times
        greet(name); // Pass the name to the greet function
    }
    
    return 0;
}
