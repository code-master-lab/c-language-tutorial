#include<stdio.h>
int main(){

    for ( int i = 1; i< 100; i++)
     {
        if( i % 2 == 0)//even
        {
            // i is an factor of n
              continue;  //Continue means skip that round [Iteration fancy words] if the condition is correct and And break means  finish the loop
        }  
        printf(" %d",i);


     }
     return 0;
}
