// #include<stdio.h>
// void england(){
//     printf(" you are in england \n"); //call function
//     return;
// }
// void australia(){
//     printf(" you are in australia\n");
//     england(); //call function
//     return;
// }
// void india(){
//     printf(" you are in india\n");
//     australia(); //call function
//     return;
// }

// int main(){
//     india(); //call function
//     return 0;
// }

// Under thise line 👇thise code is a function prototype code

#include<stdio.h>
int main(){
    void india(); //Function prototype
    india(); //call function
    return 0;
}
void india(){
    printf(" you are in india\n");
    void australia();//Function prototype
    australia(); //call function
    return;
}

void australia(){
    void england();//Function prototype
    printf(" you are in australia\n");
    england(); //call function
    return;
}
void england(){
    printf(" you are in england \n"); //call function
    return;
}

