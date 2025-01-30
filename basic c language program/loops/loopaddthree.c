 #include <stdio.h>

int main() {
    int n; // This will control the number of terms in the loop
    printf("Enter a number: ");
    scanf("%d", &n);

    // Sequence: 4, 7, 10, 13, 16, 19, ... up to n terms
    int a = 4; // Starting value of the sequence
    for (int i = 1; i <= n; i++) {
        printf("%d ", a); // Print the current term, followed by a space
        a = a + 3; // Increment the current term by 3 for the next term
    }

     printf("\n"); // Move to a new line after printing the sequence
    return 0; // Return statement for main function
}
