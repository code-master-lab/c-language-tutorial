#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;
    return n*factorial(n-1);  //function  is running by their itself
}

int main(){
    int n;
    printf(" enter a number :");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
    return 0;

}