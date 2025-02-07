#include <stdio.h>

int main() {
    // Declare and initialize an array of 7 elements
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    // Modify the array based on index positions
    for (int i = 0; i < 7; i++) {  
        if (i % 2 != 0) { 
            // If index is odd, multiply the element by 2
            arr[i] *= 2;
        } else {  
            // If index is even, add 10 to the element
            arr[i] += 10;
        }
    }

    // Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < 7; i++) {  
        printf("%d ", arr[i]);
    }
    
    return 0;
}
