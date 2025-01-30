// A pointer is a variable in C that holds the memory address of another variable instead of its actual value
//Think of it like a reference or a "shortcut" to the location in memory where the real value is stored
//Pointers are useful for directly accessing and changing the values in memory, 
//which can make programs more efficient and flexible.

// Here's a simple example:



// int num = 10;      // Regular variable storing the value 10
// int *p = &num;     // Pointer variable storing the address of 'num'

// printf("%d", *p);  // Prints the value at the address stored in 'p', which is 10


// In this example:

// 1)num is a regular integer variable.
//  2)*p is a pointer that "points" to num's memory location.
//    3)&num gives the address of num, which is stored in p.

// Pointers are powerful because they allow us to:

// 1) Access memory directly.
//  2)Pass large amounts of data more efficiently.
//   3) Work with arrays and dynamic memory

// here a programme of pointer
#include <stdio.h>

int main() {
    int num = 10;    // A regular integer variable
    int *p ;    // a regular pointer variable
    p =&num; // A pointer variable that stores the address of 'num'

    // Display the value of 'num' using the pointer
    printf("Value of num: %d\n", *p); // * is used to get the value of the address


    // Display the address of 'num' using the pointer
    printf("Address of num: %p\n", p);  // %p is used to get the address of the variable

    //Display the address of pointer *p
    printf(" Address of pointer p: %p\n",&p);    // & use to find address //&p is the address of the pointer p

    // Change the value of 'num' using the pointer
    *p = 20;
    printf("New value of num: %d\n",*p );

   //The address of the new num is remains same Just it update the value of num

    return 0;
}
