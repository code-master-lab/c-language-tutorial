#include <stdio.h>
#include <stdbool.h>

int main() {
    // Define a structure to hold date information
    typedef struct {
        int data;  // Day of the month
        int month; // Month of the year
        int year;  // Year
    } Date;

    Date a, b; // Declare two Date variables to store two dates

    // Assigning values to the first date (a)
    a.data = 10;  // Day
    a.month = 12; // Month (December)
    a.year = 2020; // Year

    // Assigning values to the second date (b)
    b.data = 17;  // Day
    b.month = 6;  // Month (June)
    b.year = 2005; // Year

    bool flag = true; // Assume dates are the same initially

    // Compare the day, month, and year of both dates
    if (a.data != b.data)   // If days are different
        flag = false;        // Set flag to false

    if (a.month != b.month) // If months are different
        flag = false;        // Set flag to false

    if (a.year != b.year)   // If years are different
        flag = false;        // Set flag to false

    // Print the result based on the flag
    if (flag == true)
        printf("The dates are the same of A and B.\n"); // Dates match
    else
        printf("The dates are different of A and B.\n"); // Dates do not match

    Date c; // here i create a new veriable C 
    c = a; // copy the value of a to c That's why the Dates are same of C and A
    bool correct = true; // Assume dates are the same initially

    // Compare the day, month, and year of both dates
    if (a.data != c.data)   // If days are different
        correct = false;        // Set flag to false

    if (a.month != c.month) // If months are different
        correct = false;        // Set flag to false

    if (a.year != c.year)   // If years are different
        correct = false;        // Set flag to false

    // Print the result based on the flag
    if (correct == true)
        printf("The dates are the same of C and A.\n"); // Dates match
    else
        printf("The dates are different C and A.\n"); // Dates do not match

    return 0; // End of program
}