 // calculate of sum
#include<stdio.h>
int main(){
    int arr[5] = { 1,2,3,4,5};
    int sum = 0;
    for ( int i=0; i<=4;i++){
        sum = sum + arr[i];

    }
    printf(" the sum of the array : %d",sum );
    return 0;
}
// calculate of product
#include<stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int product = 1; // Initialize product to 1
    for (int i = 0; i <= 4; i++) {
        product = product * arr[i]; // Calculate product
    }
    printf("The product of the array: %d", product); // Display the product
    return 0;
}
