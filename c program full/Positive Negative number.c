#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);

    if (x>0)
        printf("Number is postive \n");

    else if (x<0)
        printf("Number is negative \n");

    else
        printf("Zero");

    getch ( );
}
