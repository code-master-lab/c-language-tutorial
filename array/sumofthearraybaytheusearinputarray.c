//sum of the array bay the usear input array
#include<stdio.h>
int main() {
    int n; // Variable to store the size of the array

    // Ask the user to input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size 'n'

    // Input the elements of the array
    printf("Enter %d elements of the array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Take input for each element with help of loop
    }

    int sum = 0; // Variable to store the sum of the array
    int plus = 0;
    // Calculate the sum of the array
    for(int i = 0; i < n; i++) {
        plus = sum + arr[i]; // Add each element to sum
        sum  = plus;         // here is change is change name of whare you store the sum of the total number
    }

    // Print the elements of the array
    printf("The elements of the array are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each element
    }

    // Print the sum of the array
    printf("\nThe sum of the array is: %d\n", plus);

    return 0;
}
