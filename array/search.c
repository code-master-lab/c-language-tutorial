//Find the missing element in array
// #include<stdio.h>
// int main(){
//     int arr[7] = { 1,2,3,4,5,6,7};
//     int x =4;
//     for( int i= 0; i<=6; i++){
//         if( arr[i]==x){
//             printf(" %d is present in the array and index is %d",x,i);
//             break;
//         }

//     }
  
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int arr[7] = { 1,2,4,4,5,6,4};
//     int x =4;
//     int check = 0; // 0 mense the element is not present 
//     for( int i= 0; i<=6; i++){
//         if( arr[i]==x){
//             check=1;// 1 means element is present in arr
//             break;
//         }

//     }
//     if( check==0){
//         printf(" %d is not present in  the array",x);

//     }
//     else{
//         printf(" %d is  present in  the array",x);
//     }
  
//     return 0;
// }

#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = { 1,2,4,4,5,6,4};
    int x =4;
    int idx = -1;
    bool flag = false;// false means not present
    for( int i= 0; i<=6; i++){
        if( arr[i]==x){
           flag = true; // true mense present
           idx = i;
            break;
        }

    }
    if( flag==false){
        printf(" %d is not present in  the array",x);

    }
    else{
        printf(" %d is  present in  the array and index is %d",x,idx);
    }
  
    return 0;
}
