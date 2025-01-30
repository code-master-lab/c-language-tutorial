// #include<stdio.h>
// int main(){
//     int a;
//     printf(" enter a  :");
//     scanf("%d",&a);
//     int b;
//     printf(" enter b   :");
//     scanf("%d",&b);
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf(" the value of a is %d",a);
//     printf("\n");
//     printf("  the value of b is %d",b);
//     return 0;
// }

// other way to swap

// #include<stdio.h>
// int main(){
//     int a;
//     printf(" enter a  :");
//     scanf("%d",&a);
//     int b;
//     printf(" enter b   :");
//     scanf("%d",&b);
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf(" the value of a is %d",a);
//     printf("\n");
//     printf("  the value of b is %d",b);
//     return 0;
// }

//pass by value

// #include<stdio.h>

// void swap( int a, int b){    // void swap function      //The code tries to swap two numbers using a function called swap,
//                                                         //but it doesn't actually swap the original values because it only changes copies of the numbers inside the function.
//                                                         // In the main part, the program asks the user to enter two numbers, calls the swap function with those numbers, 
//                                                         //and then prints the original values, which stay the same because the swapping only happens inside the function and doesn't affect the original numbers outside.
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;

// }
// int main(){

//     int a;
//     printf(" enter a  :");
//     scanf("%d",&a);

//     int b;
//     printf(" enter b   :");
//     scanf("%d",&b);

//     swap(a,b);       // function call
   
//     printf(" the value of a is %d",a);
//     printf("\n");
//     printf("  the value of b is %d",b);
//     return 0;
// }

//pass by referance

#include<stdio.h>

void swap(int *a, int *b) {  // void swap function, parameters are a and b
    int temp;
    temp = *a;  // temp = value at address of a
    *a = *b;    // value at address of a = value at address of b
    *b = temp;  // value at address of b = temp
}

int main() {
    int a, b;
    
    // Input for a
    printf("Enter a: ");
    scanf("%d", &a);
    
    // Input for b
    printf("Enter b: ");
    scanf("%d", &b);
    
    // Function call to swap values of a and b
    swap(&a, &b);
    
    // Output after swap
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    
    return 0;
}
