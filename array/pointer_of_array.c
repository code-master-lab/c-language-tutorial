#include<stdio.h>
int main(){
    int arr[5] = { 1,2,3,4,5,};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    return 0;
}
// Here I don't put any extra variable to store the address of array
//directly print the addresses of the element which store in array