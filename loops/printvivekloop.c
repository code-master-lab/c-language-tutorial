#include <stdio.h>
int main() {
    int n;
    printf("enter a number: ");  // Prompt the user to enter a number
    scanf("%d", &n);  // Read the integer value from the user and store it in 'n'

    // Use 'n' in the loop condition
    for (int i = 1; i <= n; i++) {  // Loop from 1 to 'n'
        printf("vivek raut\n");  // Print "vivek raut"
    }

    return 0;  // End of the program
}

