#include<stdio.h>
int main(){
int l ,b,area,parameter;

printf("enter a length :");
scanf("%d",&l);

printf("enter a breath :");
scanf("%d",&b);

 area =l*b;// area = length * breath
parameter = 2*(l+b); // perimeter calculation

if (area>parameter){
    printf(" area is greter than peremater");
}
else{
    printf("area is not greter than peremater");
}
return 0;
}