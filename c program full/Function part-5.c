#include<stdio.h>
int main ()
{
    double base, exp, result=1, i=1;
    printf("Enter Base : ");
    scanf("%lf", &base);
    printf("Enter Exp : ");
    scanf("%lf", &exp);

    for (i=1; i<=exp; i++)
    {
        result = result * base;
    }
    printf("Result = %.2lf", result);

    getch ();
}
