#include <stdio.h>

int main() {
    int n = 26; // Total number of letters in the English alphabet

    // Loop to create the "V" pattern
    for (int i = 0; i < n / 2; i++) {
        // Print spaces for left indentation
        for (int j = 0; j < i; j++) {
            printf("  ");
        }

        // Print the left character (A, B, C, ...)
        char leftCh = 'A' + i;
        printf("%c", leftCh);

        // Print spaces between the left and right characters
        for (int j = 0; j < (n - 2 * (i + 1)); j++) {
            printf("  "); // Adjusted space for better alignment
        }

        // Print the right character (Z, Y, X, ...)
        if (i != n / 2) {
            char rightCh = 'Z' - i;
            printf("%c", rightCh);
        }

        // Move to the next line
        printf("\n");
    }

    return 0; // Indicate that the program ended successfully
}

