#include<stdio.h>
int stair ( int n){
    if (n<=2) return n;
int totalway = stair (n -1) + stair ( n- 2);
return totalway ;
}



int main(){
    int n;
    printf(" enter a number :");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d way to go", ways);
    return 0;

}