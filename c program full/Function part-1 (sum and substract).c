#include<stdio.h>
void sum (int a, int b, int c)
{
    printf("The Sum is : %d\n", a+b+c);
}
void subtract (int a, int b)
{
    printf("The Subtraction is: %d\n", a-b);
}
int main()
{
    sum (10,20,30);
    subtract(30,15);

    getch ();
}
