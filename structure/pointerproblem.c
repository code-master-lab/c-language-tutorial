#include <stdio.h>

// Define a type alias 'int_pointer' for 'int*' (pointer to integer)
// This allows us to use 'int_pointer' instead of 'int*' in declarations
typedef int *int_pointer;

int main()
{
    // Declare and initialize two integer variables
    int x = 5, y = 7;

    /* 
    Declare two pointers using our int_pointer type
    Note: Both 'a' and 'b' are pointers because:
    - The typedef makes int_pointer equivalent to int*
    - This is different from 'int *a, b' where only 'a' would be a pointer
    */
    int_pointer a = &x, b = &y;  // a stores address of x, b stores address of y

    // Print the memory addresses stored in the pointers
    // %p format specifier is used for printing pointer values (addresses)
    printf("Address of x: %p\n", a);  // Prints address where x is stored
    printf("Address of y: %p\n", b);  // Prints address where y is stored

    return 0;
}