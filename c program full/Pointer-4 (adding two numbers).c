#include<stdio.h>
int main ()
{
    int x = 15, y = 30, sum;
    int *p1, *p2;

    p1 = &x;
    p2 = &y;

    sum = *p1 + *p2;

    printf("Sum = %d\n", sum);

    getch ();
}
