//using stopvalue asa vereabal in break in loop

#include <stdio.h>

int main() {
    int stopValue;

    // Ask the user to input the value where the loop should stop
    printf("Enter the value where you want to stop loop (1 to 10): ");
    scanf("%d", &stopValue);

    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d \n", i);

        // If i equals stopValue, break out of the loop
        if (i == stopValue) {
            break;  // Exit the loop when i equals stopValuestopValuestopValuestopValue
        }
    }

    printf("Loop exited early due to break statement.\n");

    return 0;
}
