#include<stdio.h>
int main(){
    char str[50];
    puts("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the input as a string including spaces  
    
    //size
    int size = 0;
    int k =0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    for(int i=0, j =size-1; i<=j ; i++,j-- ){
        char temp;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("the reverse string is thise:");
    puts(str);
    return 0;
}