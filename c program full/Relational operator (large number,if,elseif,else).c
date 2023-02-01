#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);

    if (x>y)
        printf("Large number is: %d\n", x);
    else if (x<y)
        printf("Large number is: %d\n", y);
    else
        printf("Numbers are equal !");

    getch ();

}
