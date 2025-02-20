#include <stdio.h>

void increasing(int n) {
    if(n==0) return; //base case
     
     increasing(n-1);  //recursive call //repet fanction call
    printf("%d\n", n);   //code
   return;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

 increasing(n);  // Pass n to increasing

    return 0;
}