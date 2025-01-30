#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n%5==0 || n%3==0 ){
        printf("a number is devisebal by 5 and 3");

    }
    else{
        printf(" a number is not devisebal by 5 and 3");

    }
    return 0;


}