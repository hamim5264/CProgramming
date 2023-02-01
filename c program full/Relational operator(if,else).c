#include<stdio.h>
int main()
{
    int x;
    printf("enter an integer number: ");
    scanf("%d", &x);
    if (x%2==0)
        printf("your entered number is Even\n");
    else
        printf("your entered number is Odd");
    getch();
}
