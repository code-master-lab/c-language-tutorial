// printing output and taking input 

// #include<stdio.h>
// int main(){


//     int arr[4];
//     printf(" enter a first element :"); //Here I am giving value in array [4]
//     scanf("%d",&arr[0]);  //  indices number is a specific space in array where the value store
//     printf(" enter a second element :");
//     scanf("%d",&arr[1]);
//     printf(" enter a third element :");
//     scanf("%d",&arr[2]);
//     printf(" enter a fourth element :");
//     scanf("%d",&arr[3]);

//     printf(" print fourth element %d",arr[3]);
    
    
    
//     return 0;
// }

//Printing array values in shortcut without scanf Where I assign the value in array

// #include<stdio.h>
// int main(){


//     int arr[5] = {2,4,6,8,9}; //Here I'm giving value in array 5 by own
   
//     //Here I'm simply printing the value which assigned by me in array 5
//     printf("%d \n",arr[0] ); 
//      printf("%d \n",arr[1] );
//       printf("%d \n",arr[2] );
//        printf("%d \n",arr[3] );
//         printf("%d \n",arr[4] );

//     return 0;
//   }

// // Using of loop printing the value assigned in array 5

// #include<stdio.h>
// int main(){

//     int arr[5] = {2,4,6,8,9};
//     for( int i=0; i<=4; i++){
//         printf("%d\n", arr[i]); 
// }
// return 0;
// }

// // //Here is modify version of upper side code

// #include<stdio.h>
// int main(){


//     int arr[5] = {2,4,6,8,9};
//     for( int i=0; i<=4; i++){
//         printf(" Element at index %d :%d\n", i,arr[i]); //The variable i is  used in the output to display the current index
//  }                                                       // Indexes represent the value of the I which starts from 0 to 4
//                                                         // Here I is like representing current index

//     return 0;
// }
// #include<stdio.h>
// int main() {
//     int arr[5] = {2, 4, 6, 8, 9};
//     for (int i = 0; i <= 4; i++) {
//         printf("The %s element at index %d  : %s\n", 
//                (i == 0) ? "first" : 
//                (i == 1) ? "second" : 
//                (i == 2) ? "third" : 
//                (i == 3) ? "fourth" : 
//               "fifth", 
//                i,
//                (arr[i] == 2) ? "two" : 
//                (arr[i] == 4) ? "four" : 
//                (arr[i] == 6) ? "six" : 
//                (arr[i] == 8) ? "eight" : 
//                "nine");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int arr[5];
    for( int i =0; i<=4;i++){
       int a = i + 1;

        printf("\n enter element number %d: ",a); //Here i is taken for indices number and a is taken for actual element number
     
        scanf("  %d",&arr[i]);
    }
    for ( int i=0; i<=4; i++){
     printf("  %d",arr[i]);   
    }
    
    
   
    return 0;
}