#include<stdio.h>
int main(){
    int n;
    printf(" enter a number :");
    scanf("%d",&n);
    //ternary operator
    // You write your programme in one line without using if else
    //exp1 ? exp2 : exp3
    n%2==0 ? printf(" even number ")  :  printf(" odd number");
    
    
    
    return 0;

}