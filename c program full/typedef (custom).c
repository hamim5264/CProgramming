#include<stdio.h>

struct book
{
    char name[50];
    int price;
};

int main()
{
    typedef struct book book1;
    book1 b = {"Bangladessh", 550};
    printf("Book name : %s\n", b.name);
    printf("Book price : %d\n", b.price);

    getch ();
}
