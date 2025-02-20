#include <stdio.h>
#include <string.h> // For strcpy

int main()
{
    char s1[] = "vivek raut"; // Original string

    // Creating a deep copy
    char s2[sizeof(s1)]; // Allocate memory for s2
    strcpy(s2, s1);      // Copy contents of s1 into s2

    // Modifying s1 to check if s2 remains unchanged
    s1[0] = 'm';

    // Printing addresses
    printf("Address of s1: %p\n", s1);
    printf("Address of s2: %p\n", s2);

    // Printing both strings
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2); // s2 remains "vivek raut" proving deep copy

    return 0;
}

// Explanation:
// Deep Copy means creating a completely separate copy of the data, so changes in the original do not affect the copy.
// char s2[sizeof(s1)]; allocates the same size as s1 for s2.
// strcpy(s2, s1); copies the string from s1 to s2, ensuring s2 has an independent copy.
// Changing s1[0] to 'm' does not affect s2, proving it's a deep copy