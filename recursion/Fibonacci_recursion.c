#include<stdio.h>

int fibo( int n){
    if (n<=2) return 1;
    return fibo(n-1)+ fibo(n-2);

}
int main(){
    int n;
    printf(" enter a number : ");
    scanf("%d",&n);
    //int x = fibo(n);
    printf(" thise is number  according yo fibonacci serise %d", fibo(n));
    return 0;
}