#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // 1 2 4 8 16 32...
    int a = 1;
    for (int i = 1; i <= n; i++) { // Corrected initialization
        printf("%d ", a); // Corrected to print value of 'a' with a space
        a = a * 2; // This line doubles the value of 'a'
    }
    return 0;
}
