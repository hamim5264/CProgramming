#include<stdio.h>

int sum (int a, int b, int c)
{
    return a+b+c;
}
int main ()
{
    printf("The Sum is : %d\n", sum (10,20,30));
    printf("The Sum is : %d\n", sum(5,6,5));

    getch ();
}


