//This programme is related to built in function  of string  in C language. 
// #include <stdio.h>
// #include <string.h>
// int main(){
    
//     char* str1 = "vivek raut";
//     int x = strlen(str1); //strlen() is a built in function in C language which is used to find the length of the string.
//     printf("The length of the string is: %d\n", x);
    
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main(){
    
    char* s1 = "vivek raut";
    char s2[20];
    strcpy(s2,s1); //strcpy() is a built in function in C language which is used to copy the string from one variable to another variable.
    printf("The copied string is: %s\n", s2);
    
    
    return 0;
}
// #include <stdio.h>
// #include <string.h>
// int main(){
    
//     char s1[11] = "vivek";
//     char s2 []= "raut";
//     strcat(s1,s2); //strcat() is a built in function in C language which is used to Connect the two strings.
//     printf("The connected string is: %s\n", s1);
    
//     return 0;
// }