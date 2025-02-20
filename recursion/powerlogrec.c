#include<stdio.h>

int powerlog( int a, int b){
    if( b==0) return 1;
    int x = powerlog (a , b/2);
    if( b% 2 == 0)
    return  x*x;
    else return x*x*a;
}

int main(){
     int a;
     printf(" enter a base :");
     scanf("%d",&a);
     int b;
     printf(" enter power :");
     scanf("%d",&b);
     
     int p = powerlog( a,b);
     printf("%d raised to power %d is : %d",a,b,p);
     return 0;   
}