// #include <stdio.h>
// int main()
// {
//     char str[] = "Vivek Raut";
//     char *ptr = str;
//     printf(" %p\n", &str[0]); //Specifically point on Zeroth element
//     printf(" %p\n", &str[1]); //The address of any string gives us a address of their first zeroth element
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char str[] = "Vivek Raut";
//     char *ptr = str;  //ptr is a pointer of str
//     int i = 0;
//     while(*ptr != '\0') //'\0' is a null character
//     {
//         // printf("The address of str[%d] is %p\n", i, ptr);
//         printf("%c",*ptr);
//         ptr++;
//         i++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char str[] = "Vivek Raut";
//     char *p = str; // ptr is a point to first element of str
//     *p = 'D';      // change a vale of first element of str
//     printf("%s", str);

//     return 0;
// }

#include <stdio.h>
int main()
{

    char *p = "Vivek Raut"; 
    printf("%s", p);
    p = "Dharmendra Raut";
    printf("%s", p);
   

    return 0;
}