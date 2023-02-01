#include<stdio.h>
int main ()
{
    int result = fact (5);
    printf("Factorial of 5 = %d", result);
    getch ();
}
int fact (int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);
}
