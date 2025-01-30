#include<stdio.h>

// Function to add two numbers
int add (int x, int y) {
    return x + y;
}

// Function to multiply two numbers
int product (int x, int y) {
    return x * y;
}

int main() {
    int a, b;

    // Get the first number
    printf("Enter the 1st number: ");
    scanf("%d", &a);

    // Get the second number
    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    // Calculate the sum using the add() function
    int sum = add(a, b);
    printf("The sum of the two numbers is: %d\n", sum);

    // Calculate the product using the product() function
    int prod = product(a, b);
    printf("The product of the two numbers is: %d\n", prod);

    return 0;
}
