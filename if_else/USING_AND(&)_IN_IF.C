#include<stdio.h>
int main(){
    int a ,b ,c;
    printf("enter 1st number :");
    scanf("%d",&a);
    printf("enter 2nd number :");
    scanf("%d",&b);
    printf("enter 3rd number :");
    scanf("%d",&c);
    if(a>c  &&  a>b){
        printf("a is greter than b and c");

    }
    if( b>a  &&  b>c){
        printf("b is greter than a and c");

    }
    if( c>a  &&  c>b){
        printf("c is greter than a and c");

    }
    return 0;
}