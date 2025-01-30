#include<stdio.h>
int main(){
    int n;
    printf(" enter a number:");
    scanf("%d",&n);
    //******** up to n number of stars
    for(int i=1;i<=3;i++){  // thise loop for row
        for(int i=1;i<=n;i++)  // thise loop for colombe
        printf("*");
    printf("\n");
    }
    return 0;
    }
