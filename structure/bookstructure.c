#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct book
    {
        char name[50];
        int noofpage;
        float price;
    } book;

    book a;
    book b;

    // Details for book a
    a.noofpage = 41;
    a.price = 56.5;
    strcpy(a.name, "Lucifer");

    printf("the number of pages :%d", a.noofpage);
    printf("\nthe price :%f", a.price);
    printf("\nthe name of book :%s\n", a.name);

    // Details for book b
    b.noofpage = 100;
    b.price = 75.0;
    strcpy(b.name, "Inferno");

    printf("\nthe number of pages :%d", b.noofpage);
    printf("\nthe price :%f", b.price);
    printf("\nthe name of book :%s\n", b.name);

    return 0;
}