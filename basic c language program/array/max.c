//find the maximum value out of all the element in array
// #include<stdio.h>
// int main(){
//    int arr[7] =  { 1,2,4,5,11,10,8};
//     int max = -1; 
//     for ( int i =0; i<=6; i++){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//     }
//    printf(" The hight number in arry : %d",max);
//    return 0;
// }

#include<stdio.h>
int main(){
   int arr[7] =  { -11,-13,-12,-80,-19,-5,-12};
    int min = arr[0]; 
    for ( int i =0; i<=6; i++){
        if(min < arr[i]){
            min = arr[i];
        }
    }
   printf(" the minemum vale is thise %d",min);
   return 0;
}