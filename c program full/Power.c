#include<stdio.h>
int main()
{
    int x,y;
    double result = pow(x, y);
    printf("Enter any number for x raised to power y:\n");
    scanf("%d",&x);
    printf("Enter power:\n");
    scanf("%d", &y);
    result = pow (x, y);
    printf("Result is: %lf", result);

    getch ();
}
