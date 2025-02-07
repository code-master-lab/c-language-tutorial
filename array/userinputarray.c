#include<stdio.h>
int main(){
   int n;
   printf(" enter a size of array : ");
   scanf("%d",&n);
    int size[n];  // here the size is a name of the array
    for ( int i =0; i<=n-1; i++){      // thise is a condition i<=n-1 loop for vareable
        scanf("%d",&size[i]);       // here puting a value in array by using loop
    }
     for ( int i =0; i<=n-1; i++){
        printf(" %d",size[i]);
    }
  
    return 0;
}