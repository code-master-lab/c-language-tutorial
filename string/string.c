// #include <stdio.h>
// int main()
// {
//     char arr[] = "VIVEKRAUT";
//     int i = 0;
//     while (i < 10)
//     { // When you write conditions use double coated soma
//         printf("%c", arr[i]);
//         i++;
//     }

//     // for( int i =0; i<=32; i++){
//     //     printf("%c",arr[i]);
//     // }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]=" hi my name is vivek raut";
//     printf("%s \n",str); // %s is formate spacefire used to print the string
//     puts(str);  //puts is used to print the string 
//     return 0;
// }
//using gets
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    puts("Enter your sentance : ");
    gets(str);  //gets is used to take the input from the user with space
    printf("your input is : %s \n", str); // thise batter to print string
    puts( str ); // using puts to print the string instade of printf
    return 0;
}