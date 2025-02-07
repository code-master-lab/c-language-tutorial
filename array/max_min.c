// find the maximum value out of all the element in array
#include <stdio.h>

int main()
{
    // Declare and initialize the array
    int arr[7] = {1, 2, 4, 5, 11, 10, 8};

    // Assume the first element is the maximum
    int max = arr[0];

    // Loop through the array to find the maximum value
    for (int i = 1; i < 7; i++)
    {
        if (max < arr[i])
        { // Update max if a larger value is found
            max = arr[i]; // arr[i] go under the max
        }
    }

    // Print the maximum value found
    printf("The highest number in the array: %d", max);

    return 0;
}
// find the minimum value out of all the element in array
#include <stdio.h>

int main()
{
    // Declare and initialize an array of 7 negative elements
    int arr[7] = {-11, -13, -12, -80, -19, -5, -12};

    // Assume the first element is the minimum
    int min = arr[0];

    // Loop through the array to find the minimum value
    for (int i = 1; i < 7; i++)
    { // Start from index 1
        if (min > arr[i])
        { // Update min if a smaller value is found
            min = arr[i];
        }
    }

    // Print the minimum value found
    printf("The minimum value is: %d", min);

    return 0;
}
