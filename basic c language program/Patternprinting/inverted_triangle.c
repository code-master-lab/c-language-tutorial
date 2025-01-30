#include<stdio.h>
int main()
{
    int n;
    printf(" enter no.of row :");
    scanf("%d",&n);
    for(int i =1; i<=n; i++){  //no of line row
    
        for(int j =1; j<=n+1-i; j++){ // no of columns
        printf("* ");

        }
        printf("\n\n");
    }
    return 0;
}
