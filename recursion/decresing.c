#include <stdio.h>

void decrasing(int n) {
    if(n==0) return;
    printf("%d\n", n);
     decrasing(n-1);  //recursive call //repet fanction call
   return;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

 decrasing(n);  // Pass n to decrasing

    return 0;
}

