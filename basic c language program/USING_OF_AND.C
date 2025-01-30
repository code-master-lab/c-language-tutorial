#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n>99   &&   n<1000){
        printf("the number contaning three dight number ");

    }
    else{
        printf("the number Does not contain three dight number ");
    }
    return 0;
}

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is a three-digit number
    if(n > 99 && n < 1000){
        printf("The number contains three digits.\n");
    }
    // Check if the number is a two-digit number
    else if(n > 9 && n < 100){
        printf("The number contains two digits.\n");
    }
    // Check if the number is a single-digit number
    else if(n >= 0 && n < 10){
        printf("The number contains one digit.\n");
    }
    // Check if the number is a negative three-digit number
    else if(n < -99 && n > -1000){
        printf("The number is a negative three-digit number.\n");
    }
    else{
        printf("The number does not fit into the specified categories.\n");
    }

    return 0;
}