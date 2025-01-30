#include <stdio.h>
void swap(int *a, int *b); // Function prototype //

int main()
{

    int a, b;

    // Input for a
    printf("Enter value of a: ");
    scanf("%d", &a);

    // Input for b
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Function call to swap values of a and b using addresses
    swap(&a, &b);    //& is help to pass the address of a and b

    // Output after swap
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return 0;
}
void swap(int *a, int *b)    // function definition
{ // Void swap function, parameters are pointers a and b
    int temp;
    temp = *a; // temp stores the value at the address of a
    *a = *b;   // value at the address of a is set to the value at the address of b
    *b = temp; // value at the address of b is set to temp
}
