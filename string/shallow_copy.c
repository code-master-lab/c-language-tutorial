#include <stdio.h>

int main()
{
    char s1[] = "vivek raut"; // Original string

    char *s2 = s1; // Shallow copy: s2 points to the same memory as s1

    // Modifying s1
    s1[0] = 'm'; // Changing first letter of s1

    // Printing both strings
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2); // s2 also changes because it shares memory with s1

    return 0;
}

// Explanation (Simple)
// s1 is created with "vivek raut".
// s2 is assigned s1, but no new memory is allocated. It just points to the same location.
// When s1[0] is changed to 'm', it also affects s2 because both share the same memory.
// Printing s2 shows it has also changed, proving it’s a shallow copy.