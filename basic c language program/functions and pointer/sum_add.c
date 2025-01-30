#include<stdio.h>
int add (int x, int y){
    return x+y;

}
int main(){
     
     int a;
     printf(" enter a 1st number :");
     scanf(" %d",&a);
     int b;
     printf(" enter a 2nd number :");
     scanf(" %d",&b);
     int sum = add(a,b);
     printf (" the sum of 2 number is thise %d",sum);
     return 0;
}
