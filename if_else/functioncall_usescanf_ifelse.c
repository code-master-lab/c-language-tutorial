#include <stdio.h>

void greet(char name[]) {
    printf("\n   Good morning, %s!\n", name);
    printf("     How are you?\n");
}

int main() {
    int shouldGreet;
    char name[50]; // Array to store the name

    // Ask the user for their name
    printf("\nEnter your name: ");
    scanf("%s", name); // Read the name from user input

    // Ask the user whether to greet or not
    printf("\nDo you want to be greeted? Enter 1 for Yes, 0 for No: ");
    scanf("%d", &shouldGreet); // Use scanf to read the input

    if (shouldGreet) {
        // If shouldGreet is true (1), greet ten times
        for (int i = 0; i < 10; i++) {
            greet(name); // Pass the name to the greet function
        }
    } else {
        // If shouldGreet is false (0), print a different message
        printf("No greetings today.\n");
    }
    
    return 0;
}
// Some upgrade version with new space line added When you want to enter a name with spaceline use thise code
#include <stdio.h>

void greet(char name[]) {
    printf("\n   Good morning, %s", name);
    printf("   How are you?\n");
}

int main() {
    int shouldGreet;
    char name[50]; // Array to store the name

    // Ask the user for their name
    printf("\nEnter your name: ");
    fgets(name, sizeof(name), stdin); // Read the name from user input using fgets

    // Ask the user whether to greet or not
    printf("\nDo you want to be greeted? Enter 1 for Yes, 0 for No: ");
    scanf("%d", &shouldGreet); // Use scanf to read the input

    if (shouldGreet) {
        // If shouldGreet is true (1), greet ten times
        for (int i = 0; i < 10; i++) {
            greet(name); // Pass the name to the greet function
        }
    } else {
        // If shouldGreet is false (0), print a different message
        printf("No greetings today.\n");
    }
    
    return 0;
}
