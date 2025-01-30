//#include<stdio.h>


//int main(){
   // void fun(); //Function prototyp basically When we are calling function anywhere in programme it will call if you write into int main function
    // fun();     //function call
    // return 0;
// }
// void fun(){
//     printf( " vivek");
// }
// if you remove this line  (void fun();) You should write void function upper side of the int  main function
//Do you want to call function anywhere in programme which is Present in any order ascending descending 
//but if you want to call The functions in programme you use function prototypes in (int main) function

#include <stdio.h>
// void display();  // Function prototype //function declaration


int main() {
    
    // Function call
    display();
    return 0;
}

// Function definition
void display() {
    printf("Hello, Vivek!\n");
}
