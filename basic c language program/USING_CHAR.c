// for single character programme

// #include <stdio.h>

// int main() {
//     char ch;

//     // Read a single character
//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     // Print the character
//     printf("You entered: %c\n", ch);

//     return 0;
// }



// if we want  to create a char data type where you can store multiple alphabets
//For creating char data type for multiple alphabet you use %s a format specifier
//In this code you cannot add the space
#include <stdio.h>

int main() {
    char name[50]; // Define a character array (string) to hold the name
    printf("Enter your name: ");
    scanf("%s", name); // Read the input as a string  and & is not used in scanf
    printf("Your name is: %s\n", name); // Print the input as a string
    return 0;
}
//If you want to use a space in your code like ex :vivek raut
//Then we have to use instead of scanf,fgets
#include <stdio.h>

int main() {
    char name[50]; // Define a character array (string) to hold the name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read the input as a string including spaces
    printf("Your name is:%s", name); // Print the input as a string
    return 0;
}
//fgets can read an entire line, including spaces. So if you enter "Vivek Raut", fgets will store "Vivek Raut" in the name variable.
// in scanf You do not get a space line which gate in fget
//fgets(name, sizeof(name), stdin);


// Explanation of ( fgets(name, sizeof(name), stdin);)
// name is the variable to store the input.
// sizeof(name) specifies the maximum number of characters to read (up to 49 characters plus a null terminator).
// stdin indicates that input is coming from the standard input (keyboard).


