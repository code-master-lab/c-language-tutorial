#include<stdio.h>
int main(){
    int arr[7] = { 1,2,3,4,5,6,7};
    int sumeven = 0; // 1+3+5+7 = 16
    int sumodd = 0;   // 2+4+6 = 12
    for( int i =0; i<=6; i++){
        if(i%2 ==0){
            sumeven +=arr[i];
        }
        else{
            sumodd +=arr[i];
        }
    }
    int res = sumeven - sumodd;
    printf("%d",res);
    return 0;
}