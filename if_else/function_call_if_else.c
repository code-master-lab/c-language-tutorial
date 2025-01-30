#include <stdio.h>

void greet() {
    printf("Good morning vivek \n");
    printf("How are you?\n");
}

int main() {
    int shouldGreet = 1; // Change this variable to control greeting

    if (shouldGreet) {
        // If shouldGreet is true (1), greet three times
        for (int i = 0; i < 3; i++) {
            greet();
        }
    } else {
        // If shouldGreet is false (0), print a different message
        printf("No greetings today.\n");
    }
    
    return 0;
}
