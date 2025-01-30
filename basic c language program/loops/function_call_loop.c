#include <stdio.h>

void greet() {
    printf("Good morning!\n");
    printf("How are you?\n");
}

int main() {
    // Using a for loop to call greet() multiple times
    for (int i = 0; i < 3; i++) { // Loop will run 3 times
        greet();
    }
    
    return 0;
}
