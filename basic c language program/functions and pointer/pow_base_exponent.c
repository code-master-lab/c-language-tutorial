#include<stdio.h>
#include<math.h>
int main(){
    int base, exponent;
    int result;

    // Asking user to input the base and the exponent
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculating the power and casting the result to int
    result = (int)pow(base, exponent);

    // Displaying the result
    printf("Result of %d to the power of %d = %d\n", base, exponent, result);

    return 0;
}