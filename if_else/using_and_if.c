#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    if (a > c && a > b) {
        printf("a is greater than b and c\n");
    }
    else if (b > a && b > c) {
        printf("b is greater than a and c\n");
    }
    else if (c > a && c > b) {  // Corrected 'else' to 'else if'
        printf("c is greater than a and b\n");
    } else {
        printf("There is a tie or multiple numbers are equal.\n");
    }

    return 0;
}
