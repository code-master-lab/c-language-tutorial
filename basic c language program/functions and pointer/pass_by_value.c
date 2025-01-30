//pass by value

#include<stdio.h>

                                                        //The code tries to swap two numbers using a function called swap,
  void swap( int a, int b){  // void swap function      // but it doesn't actually swap the original values because it only changes copies of the numbers inside the function.
                                                        // In the main part, the program asks the user to enter two numbers, calls the swap function with those numbers,                                                          //and then prints the original values, which stay the same because the swapping only happens inside the function and doesn't affect the original numbers outside.
    int temp;
    temp = a;
    a = b;
    b = temp;

     // Print values inside the function (swapping happens locally)
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main(){

    int a;
    printf(" enter value of a  :");
    scanf("%d",&a);

    int b;
    printf(" enter value of  b   :");
    scanf("%d",&b);

    swap(a,b);       // function call
   
    printf(" outside the swip function a = %d b =%d",a,b);
   
    return 0;
}