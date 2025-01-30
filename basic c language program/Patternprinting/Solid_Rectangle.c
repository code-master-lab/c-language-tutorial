#include <stdio.h>
int main()
{
    int n; // Create a box  n   for row
    printf(" enter a number of row:");
    scanf("%d", &n);
    int j; // create a box of J for columns
    printf(" enter a number of columns :");
    scanf("%d", &j);
    //******** up to n number of stars
    for (int i = 1; i <= n; i++) // outer loop number of rows stars
    {                                
        for (int i = 1; i <= j; i++) // Inner loop number of columns stars
            printf("*"); // Print star
        printf("\n"); // Create a new line after every line
    }
    return 0;
}
// Number of line :-number of rows
//  number of stars each line :-Number of columns