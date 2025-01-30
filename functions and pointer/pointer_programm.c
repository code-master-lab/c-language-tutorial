// #include<stdio.h>
// int main(){
//     int a = 25;
//     printf("%p",&a); // Percentage P is used to print address value and & is used to find address
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf(" enter a number : ");
//     scanf("%d",&a);
//     int*x =&a;
//     printf("%p",x);
//     printf("\n");
//     printf( "%p",&x);
//     printf("\n");
//     printf("%d",*x);
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int a  = 25;
// int* x =&a;
// *x = 7;    // a is changed
// printf("%d",a);

// return 0;
// }

#include<stdio.h>
 
#include<stdio.h>
int main(){
int a  = 25;
int *x =&a;
printf(" current value of A is : %d \n",a); 

//*x = scanf

printf(" enter a new value of change of a ");
scanf("%d",&x);  // a is changed

//print x new change value 

printf(" update value of a = %d\n",x );



return 0;
}
//*x = scanf

printf(" enter a new value of change of a ");
scanf("%d",&x);  // a is changed

//print x new change value 

printf(" update value of a = %d\n",x );
printf(" Address of verible x: %p\n", *);


return 0;
}
