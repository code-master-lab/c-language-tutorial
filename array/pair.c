#include<stdio.h>
int main(){
   int arr[8] ={1,2,3,4,5,6,7,8};
    int totalpair =0;
    int x= 12;
    for( int i =0; i<=7; i++){
        for( int j =i+1;j<=7;j++){
           if(arr[i] + arr[j] ==x){
              totalpair++;
              printf(" (%d,%d)\n",arr[i],arr[j]);
           }
        }
    }
    printf("%d",totalpair);
     return 0;
}